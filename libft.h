/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 16:14:16 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/28 12:20:26 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "types.h" 

void	ft_bzero(void *str, t_lui n);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void	*ft_memset(void *str, int c, t_lui len);
char    *ft_strcat(char *dest, char *src);
char    *ft_strchr(char *str, int c);
t_lui   ft_strlcat(char *dest, const char *src, t_lui size);
t_lui   ft_strlcpy(char *dest, const char *src, t_lui size);
t_lui   ft_strlen(const char *str);
int     ft_strncmp(char *s1, char *s2, t_ui n);
char    *ft_strrchr(char *str, int c);
int     ft_tolower(int c);
int     ft_toupper(int c);

#endif
