/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 20:18:36 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/13 20:23:45 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element 'new' at the beginning of the list.
*/

void	ft_lstadd_front(t_list **list, t_list *new)
{
	new->next = list[0];
	list[0] = new;
}
