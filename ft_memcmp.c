/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 11:47:46 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/12 18:48:12 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares byte string str1 against byte string str2.  Both strings
** are assumed to be len bytes long. Returns zero if the two strings are
** identical, otherwise returns the difference between the first two differing
** bytes.
*/

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	size_t	i;

	i = 0;
	while (len)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
		{
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		}
		i++;
		len--;
	}
	return (0);
}
