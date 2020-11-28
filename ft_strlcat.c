/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:17:48 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/28 12:13:56 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lui	ft_strlcat(char *dest, const char *src, t_lui size)
{
	t_lui dest_size;
	t_lui i;

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
