/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:13:40 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/12 18:49:22 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes len bytes of value c (converted to an unsigned char)
** to the string b. Returns its first argument.
*/

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = str;
	i = 0;
	while (len)
	{
		ptr[i] = c;
		i++;
		len--;
	}
	return (str);
}
