/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 19:36:35 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/12 18:52:22 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a substring from the string 'str'.
** The substring begins at index 'start' and is ofmaximum size 'len'.
** Returns the substring or  NULL if the allocation fails
*/

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char *substr;

	if (!str)
	{
		return (0);
	}
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (substr == 0)
	{
		return (0);
	}
	if (start >= ft_strlen(str))
	{
		return (substr);
	}
	ft_strlcpy(substr, str + start, len + 1);
	return (substr);
}
