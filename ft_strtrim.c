/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 21:04:16 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/05 18:57:32 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of 's1' with the characters
** specified in 'set' removed from the beginning and the end of the string.
** Returns NULL if the allocation fails.
*/

char	*ft_strtrim(char const *str1, char const *set)
{
	char	*str;
	size_t	str_len;

	if (!str1 || !set)
	{
		return (0);
	}
	while (*str1 && ft_strchr((char *)set, *str1))
	{
		str1++;
	}
	str_len = ft_strlen(str1);
	while (str_len && ft_strchr((char *)set, str1[str_len]))
	{
		str_len--;
	}
	str = ft_substr((char *)str1, 0, str_len + 1);
	return (str);
}
