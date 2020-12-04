/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 15:30:55 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/04 15:40:41 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

/*
** Allocates enough space for count objects that are size bytes of memory each
** and returns a pointer to the allocated memory. The allocated memory is
** filled with bytes of value zero.
*/

void	*ft_calloc(t_lui count, t_lui size)
{
	void *mem;

	mem = malloc(size * count);
	if (mem == 0)
	{
		return (0);
	}
	ft_bzero(mem, count * size);
	return (mem);
}
