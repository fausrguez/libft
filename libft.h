/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 16:14:16 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/04 19:33:17 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "stddef.h"
# include "stdlib.h"

int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *dest, const void *src, int c, size_t len);
void	*ft_memchr(const void *str, int c, size_t len);
int		ft_memcmp(const void *str1, const void *str2, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t len);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(char *str, int c);
char	*ft_strdup(const char *str1);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(char *str1, char *str2, size_t len);
char	*ft_strnstr(const char *str1, const char *str2, size_t len);
char	*ft_strrchr(char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
