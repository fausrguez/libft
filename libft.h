/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 16:14:16 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/04 15:39:03 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "types.h"

int		ft_atoi(const char *str);
void	ft_bzero(void *str, t_lui n);
void	*ft_calloc(t_lui count, t_lui size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *dest, const void *src, int c, t_lui len);
void	*ft_memchr(const void *str, int c, t_lui len);
int		ft_memcmp(const void *str1, const void *str2, t_lui len);
void	*ft_memcpy(void *dest, const void *src, t_lui len);
void	*ft_memmove(void *dest, const void *src, t_lui len);
void	*ft_memset(void *str, int c, t_lui len);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(char *str, int c);
t_lui	ft_strlcat(char *dest, const char *src, t_lui size);
t_lui	ft_strlcpy(char *dest, const char *src, t_lui size);
t_lui	ft_strlen(const char *str);
int		ft_strncmp(char *str1, char *str2, t_ui len);
char	*ft_strnstr(const char *str1, const char *str2, t_lui len);
char	*ft_strrchr(char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
