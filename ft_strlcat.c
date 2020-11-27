/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:17:48 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 11:17:52 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lui	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int c;
	unsigned int src_size;
	unsigned int dest_size;

	c = 0;
	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	while (c < size - 1 && c <= src_size)
	{
		dest[dest_size + c] = src[c];
		c++;
	}
	if (c == dest_size || c <= 0)
	{
		return (0);
	}
	dest[dest_size + c] = '\0';
	return (ft_strlen(dest));
}
