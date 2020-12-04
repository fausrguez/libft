/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 20:45:39 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/04 20:59:33 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a newstring, which is the result of
** the concatenationof 's1' and 's2'. Returns NULL if the allocation fails.
*/

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*str;
	size_t	str1_len;
	size_t	str_len;

	str1_len = ft_strlen(str1);
	str_len = str1_len + ft_strlen(str2) + 2;
	str = (char *)malloc(sizeof(char) * str_len);
	if (str == 0)
	{
		return (0);
	}
	ft_strlcpy(str, str1, str_len);
	ft_strlcpy(str + str1_len, str2, str_len);
	return (str);
}