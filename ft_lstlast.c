/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 20:31:42 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/13 20:47:33 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the last element of the list.
*/

t_list	*ft_lstlast(t_list *list)
{
	while (list)
	{
		if (!list->next)
		{
			break;
		}
		list = list->next;
	}
	return (list);
}
