/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 20:03:54 by farodrig      #+#    #+#                 */
/*   Updated: 2021/01/25 11:54:50 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Allocates (with malloc(3)) and returns a new element. The variable 'content'
** is initialized with the value of the parameter 'content'.
** Thevariable 'next' is initialized to NULL.
*/

t_list	*ft_lstnew(void *content)
{
	t_list *new_list;

	new_list = (t_list*)malloc(sizeof(t_list));
	if (!new_list)
	{
		return (0);
	}
	new_list->content = content;
	new_list->next = 0;
	return (new_list);
}
