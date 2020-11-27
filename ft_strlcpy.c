/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 19:21:22 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 10:14:41 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
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
