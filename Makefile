# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: farodrig <farodrig@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/14 14:17:26 by farodrig      #+#    #+#                  #
#    Updated: 2021/02/05 12:39:06 by farodrig      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS := -Wall -Wextra -Werror
function_files := \
					./ft_atoi.c \
					./ft_bzero.c \
					./ft_calloc.c \
					./ft_isalnum.c \
					./ft_isalpha.c \
					./ft_isascii.c \
					./ft_isdigit.c \
					./ft_isprint.c \
					./ft_itoa.c \
					./ft_memccpy.c \
					./ft_memchr.c \
					./ft_memcmp.c \
					./ft_memcpy.c \
					./ft_memmove.c \
					./ft_memset.c \
					./ft_putchar_fd.c \
					./ft_putendl_fd.c \
					./ft_putnbr_fd.c \
					./ft_putstr_fd.c \
					./ft_split.c \
					./ft_strchr.c \
					./ft_strdup.c \
					./ft_strjoin.c \
					./ft_strlcat.c \
					./ft_strlcpy.c \
					./ft_strlen.c \
					./ft_strmapi.c \
					./ft_strncmp.c \
					./ft_strnstr.c \
					./ft_strrchr.c \
					./ft_strtrim.c \
					./ft_substr.c \
					./ft_tolower.c \
					./ft_toupper.c
bonus_files := \
					./ft_lstadd_back.c \
					./ft_lstadd_front.c \
					./ft_lstclear.c \
					./ft_lstdelone.c \
					./ft_lstiter.c \
					./ft_lstlast.c \
					./ft_lstmap.c \
					./ft_lstnew.c \
					./ft_lstsize.c

function_objects := ${function_files:.c=.o}
bonus_objects := ${bonus_files:.c=.o}

all: $(NAME)

%.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

$(NAME): ${function_objects}
	ar rc $(NAME) $(function_objects)

clean:
	rm -rf $(function_objects) $(bonus_objects)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(function_objects) $(bonus_objects)
	ar rc $(NAME) $(function_objects) $(bonus_objects)

norm:
	@norminette -R CheckForbiddenSourceHeader \
	$(function_files) $(bonus_files) *.h

.PHONY: all fclean clean re bonus norm
