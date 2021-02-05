/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/09 13:50:24 by farodrig      #+#    #+#                 */
/*   Updated: 2021/02/04 23:28:56 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes and frees the given element and every successor of that element,
** using the function 'del' and free(3). Finally, the pointer to the list
** must be set to NULL
*/

void	ft_lstclear(t_list **list, void (*del)(void*))
{
	t_list *next_list;

	while (list && *list)
	{
		next_list = (*list)->next;
		ft_lstdelone(*list, del);
		*list = next_list;
	}
	*list = 0;
}
