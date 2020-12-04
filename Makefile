# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: farodrig <farodrig@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/14 14:17:26 by farodrig      #+#    #+#                  #
#    Updated: 2020/12/04 11:25:05 by farodrig      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft
FLAGS := -Wall -Wextra -Werror -pedantic -std=c89
function_files := \
					./ft_bzero.c \
					./ft_isalnum.c \
					./ft_isalpha.c \
					./ft_isascii.c \
					./ft_isdigit.c \
					./ft_isprint.c \
					./ft_memccpy.c \
					./ft_memchr.c \
					./ft_memcpy.c \
					./ft_memmove.c \
					./ft_memset.c \
					./ft_strchr.c \
					./ft_strlcat.c \
					./ft_strlcpy.c \
					./ft_strlen.c \
					./ft_strncmp.c \
					./ft_strrchr.c \
					./ft_tolower.c \
					./ft_toupper.c

define make_object_files
	@for file in `echo $(1) | sed -e 's/\.\///g' -e 's/\.c/\.o/g'`; do \
		$(MAKE) $$file;\
	done
endef

all: 
	$(MAKE) fclean 
	$(MAKE) $(NAME)

$(NAME): functions
	ar rc $(NAME).a $(shell echo $(function_files) | sed -e 's/\.c/\.o/g')

functions:
	$(call make_object_files,$(function_files))

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

clean:
	find . -name "*.o" -delete

fclean: clean
	find . -name "*.a" -delete

re: fclean all

bonus:
	echo "BONUS"

norm:
	@norminette -R CheckForbiddenSourceHeader `echo $(function_files)` *.h

.PHONY: all fclean clean re test_suite
