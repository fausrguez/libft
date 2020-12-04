/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 10:22:08 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/04 11:19:14 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*copy_from_back_to_front(
	void *dest,
	const void *src,
	t_lui len
)
{
	while (len--)
	{
		((char *)dest)[len] = ((char *)src)[len];
	}
	return (dest);
}

static void	*copy_from_front_to_back(
	void *dest,
	const void *src,
	t_lui len
)
{
	t_lui	i;

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

void		*ft_memmove(void *dest, const void *src, t_lui len)
{
	if (dest == 0 && src == 0)
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
