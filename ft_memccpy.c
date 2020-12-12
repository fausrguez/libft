/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 14:37:22 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/12 18:47:59 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies bytes from string src to string dest.  If the character c
** (as converted to an unsigned char) occurs in the string src, the copy
** stops and a pointer to the byte after the copy of c in the string dst is
** returned.  Otherwise, len bytes are copied, and a NULL pointer is returned.
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char*)dest;
	str2 = (unsigned char*)src;
	i = 0;
	while (len)
	{
		str1[i] = str2[i];
		if (str2[i] == (unsigned char)c)
		{
			return (str1 + (i + 1));
		}
		i++;
		len--;
	}
	return (0);
}
