/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:16:18 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 11:16:21 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	t_lui	c;
	t_lui	src_size;
	t_lui	dest_size;

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
