/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 18:13:44 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/28 12:39:58 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes len zeroed bytes to the string str.
*/

void	ft_bzero(void *str, t_lui len)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = str;
	i = 0;
	while (len--)
	{
		ptr[i++] = 0;
	}
}
