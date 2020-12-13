/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 20:48:32 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/13 21:00:19 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element 'new' at the end of the list.
*/

void	ft_lstadd_back(t_list **list, t_list *new)
{
	if (list)
	{
		if (*list)
		{
			ft_lstlast(*list)->next = new;
		}
		else
		{
			*list = new;
		}
	}
}
