/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 21:08:59 by farodrig      #+#    #+#                 */
/*   Updated: 2021/01/25 11:55:22 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Takes as a parameter an element and frees the memory of the element's
** content using the function 'del' given as a parameter and free the element.
** The memory of 'next' must not be freed
*/

void	ft_lstdelone(t_list *list, void (*del)(void*))
{
	if (!list)
	{
		return ;
	}
	if (del)
	{
		del(list->content);
	}
	free(list);
}
