/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/09 14:16:48 by farodrig      #+#    #+#                 */
/*   Updated: 2021/02/28 22:08:44 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Iterates the list 'lst' and applies the function 'f' to the content of each
** element. Creates a newlist resulting of the successive applications of the
** function 'f'.  The 'del' function is used to delete the content of an
** element if needed
*/

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map_list;
	int		lst_size;

	(void)del;
	if (!list)
	{
		return (0);
	}
	lst_size = ft_lstsize(list);
	map_list = ft_lstnew(f(list->content));
	list = list->next;
	while (list)
	{
		ft_lstadd_back(&map_list, ft_lstnew(f(list->content)));
		list = list->next;
	}
	return (&map_list[0]);
}
