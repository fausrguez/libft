/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:18:09 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/12 18:51:12 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies up to dstsize - 1 characters from the string src to dst,
** NUL-terminating the result if dstsize is not 0. Returns the length of src.
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	if (!dest && !src)
	{
		return (0);
	}
	if (!size)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
