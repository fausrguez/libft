/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 10:22:08 by farodrig      #+#    #+#                 */
/*   Updated: 2021/02/28 20:44:52 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*copy_from_back_to_front(
	void *dest,
	const void *src,
	size_t len
)
{
	while (len)
	{
		len--;
		((char *)dest)[len] = ((char *)src)[len];
	}
	return (dest);
}

static void	*copy_from_front_to_back(
	void *dest,
	const void *src,
	size_t len
)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/*
** Copies len bytes from string src to string dest. The two strings may overlap;
** the copy is always done in a non-destructive manner.
** Returns the original value of dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
	{
		return (dest);
	}
	if (dest > src)
	{
		copy_from_back_to_front(dest, src, len);
	}
	else
	{
		copy_from_front_to_back(dest, src, len);
	}
	return (dest);
}
