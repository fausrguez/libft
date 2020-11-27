/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:18:09 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 11:18:11 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lui	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int c;

	c = 0;
	if (size > 0)
	{
		while (src[c] != '\0' && c <= size)
		{
			dest[c] = src[c];
			c++;
		}
		while ((c <= size || src[c] != '\0'))
		{
			dest[c] = 0;
			c++;
		}
	}
	return (ft_strlen(src));
}
