/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 23:26:25 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/15 16:16:14 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	long unsigned int c;
	long unsigned int src_size;
	long unsigned int dest_size;

	c = 0;
	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	while (c <= src_size)
	{
		dest[dest_size + c] = src[c];
		c++;
	}
	dest[dest_size + c] = '\0';
	return (dest);
}
