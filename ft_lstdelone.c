/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 21:08:59 by farodrig      #+#    #+#                 */
/*   Updated: 2021/01/09 13:46:15 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
