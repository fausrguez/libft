/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 18:13:44 by farodrig      #+#    #+#                 */
/*   Updated: 2021/02/05 12:40:31 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes len zeroed bytes to the string str.
*/

void	ft_bzero(void *str, size_t len)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = str;
	i = 0;
	while (len)
	{
		ptr[i] = 0;
		i++;
		len--;
	}
}
