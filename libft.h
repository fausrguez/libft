/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 16:14:16 by farodrig      #+#    #+#                 */
/*   Updated: 2021/02/28 20:48:09 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
int				ft_atoi(const char *str);
void			ft_bzero(void *str, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
void			ft_lstadd_back(t_list **list, t_list *new);
void			ft_lstadd_front(t_list **list, t_list *new);
void			ft_lstclear(t_list **list, void (*del)(void*));
void			ft_lstdelone(t_list *list, void (*del)(void*));
void			ft_lstiter(t_list *list, void (*f)(void *));
t_list			*ft_lstlast(t_list *list);
t_list			*ft_lstmap(\
					t_list *list, \
					void *(*f)(void *), \
					void (*del)(void *)\
);
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *list);
void			*ft_memccpy(void *dest, const void *src, int c, size_t len);
void			*ft_memchr(const void *str, int c, size_t len);
int				ft_memcmp(const void *str1, const void *str2, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t len);
void			*ft_memmove(void *dest, const void *src, size_t len);
void			*ft_memset(void *str, int c, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *str, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *str, int fd);
char			**ft_split(char const *str, char c);
char			*ft_strchr(char *str, int c);
char			*ft_strdup(const char *str1);
char			*ft_strjoin(char const *str1, char const *str2);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char *str);
char			*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int				ft_strncmp(char *str1, char *str2, size_t len);
char			*ft_strnstr(const char *str1, const char *str2, size_t len);
char			*ft_strrchr(char *str, int c);
char			*ft_strtrim(char const *str1, char const *set);
char			*ft_substr(char const *str, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif
