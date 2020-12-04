/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 11:21:41 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/04 11:38:15 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of c (converted to an unsigned char) in
** string s. Returns a pointer to the byte located, or NULL if no such byte
** exists within n bytes.
*/

void	*ft_memchr(const void *str, int c, t_lui len)
{
	unsigned char	*ptr;
	t_ui			i;

	ptr = (unsigned char*)str;
	i = 0;
	while (len--)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return (ptr + i);
		}
		i++;
	}
	return (0);
}