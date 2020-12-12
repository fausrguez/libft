/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 08:58:42 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/12 18:48:18 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes from memory area src to memory area dst
*/

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	unsigned int	i;

	if (dest == 0 && src == 0)
	{
		return (dest);
	}
	ptr = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	i = 0;
	while (len)
	{
		ptr[i] = ptr2[i];
		i++;
		len--;
	}
	return (dest);
}
