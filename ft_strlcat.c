/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:17:48 by farodrig      #+#    #+#                 */
/*   Updated: 2021/02/28 20:45:57 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Appends  the src string to the dest string, overwriting the terminating
** null byte ('\\0') at the end of dest, and then adds a terminating null byte.
*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	i;

	dest_size = ft_strlen(dest);
	i = 0;
	if (size <= dest_size)
	{
		return (size + ft_strlen(src));
	}
	while (src[i] && dest_size + i < (size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (ft_strlen(src) + dest_size);
}
