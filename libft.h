/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 16:14:16 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/15 16:42:09 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_strcat(char *dest, char *src);
char				*ft_strchr(char *str, int c);
long unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
long unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
long unsigned int	ft_strlen(const char *str);
int					ft_strncmp(char *s1, char *s2, unsigned int n);
char				*ft_strrchr(char *str, int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

#endif
