/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 12:10:46 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/04 13:49:17 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of the null-terminated string str2 in the
** string str1, where not more than len characters are searched.
** Characters that appear after a `\0' character are not searched. If str2 is
** an empty string, str1 is returned; if str2 occurs nowhere in str1,
** NULL is returned; otherwise a pointer to the first character of the first
** occurrence of str2 is returned.
*/

char	*ft_strnstr(const char *str1, const char *str2, t_lui len)
{
	t_lui str2_len;

	if (*str2 == 0)
	{
		return ((char *)str1);
	}
	str2_len = ft_strlen(str2);
	while (*str1 != 0 && len-- >= str2_len)
	{
		if (*str1 == *str2 && ft_memcmp(str1, str2, str2_len) == 0)
		{
			return ((char *)str1);
		}
		str1++;
	}
	return (0);
}
