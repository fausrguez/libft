/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:13:40 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 16:44:51 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, t_lui len)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = str;
	i = 0;
	while (len--)
	{
		ptr[i++] = c;
	}

	return (str);
}
