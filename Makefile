# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: farodrig <farodrig@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/14 14:17:26 by farodrig      #+#    #+#                  #
#    Updated: 2020/11/27 14:50:02 by farodrig      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft
FLAGS := -Wall -Wextra -Werror
function_files := $(shell find . -name "*.c" -not -name "*.test.c" -maxdepth 1 | tr '\n' ' ')
test_files := $(shell find . -name "*.test.c" | tr '\n' ' ')
test_suite_files := $(shell find test_suite -name "*.c" | tr '\n' ' ')
object_files := $(shell find . -name "*.o"| tr '\n' ' ')
exec_files := $(shell find . -name "*.out" | tr '\n' ' ')

define make_object_files
	@for file in `echo $(1) | sed -e 's/\.\///g' -e 's/\.c/\.o/g'`; do \
		$(MAKE) $$file;\
	done
endef

define make_executables
	@for file in `echo $(1) | sed -e 's/\.\///g' -e 's/\.c/\.out/g'`; do \
		$(MAKE) $$file;\
	done
endef

all: functions tests link

$(NAME): functions
	ar rc $(NAME).a `echo $(function_files) | sed -e 's/\.\///g' -e 's/\.c/\.o/g'`

functions:
	@echo "--MAKE FUNCTIONS--"
	$(call make_object_files,$(function_files))

tests: test_suite
	@echo "--MAKE TESTS--"
	$(call make_object_files,$(test_files))

test_suite:
	@echo "--MAKE TESTS SUITE--"
	$(call make_object_files,$(test_suite_files))

link:
	@echo "--MAKE LINK--"
	$(call make_executables,$(function_files))

exec_all:
	@for file in $(exec_files); do \
		$$file; \
	done

ft_isalnum.out: ft_isalnum.o ft_isalnum.test.o ft_isalpha.o ft_isdigit.o
ft_strcat.out: ft_strcat.o ft_strcat.test.o ft_strlen.o
ft_strlcat.out: ft_strlcat.o ft_strlcat.test.o ft_strlen.o
ft_strlcpy.out: ft_strlcpy.o ft_strlcpy.test.o ft_strlen.o

%.out: %.o %.test.o
	$(CC) $^ $(test_suite_files) -o $@

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

clean:
	find . -name "*.out" -delete

fclean: clean
	find . \( -name "*.o" -o -name "*.a" \) -delete

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader *.c

.PHONY: all fclean clean re test_suite
