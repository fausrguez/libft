/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 16:30:01 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/12 16:34:25 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string 's' to the given filedescriptor.
*/

void	ft_putstr_fd(char *str, int fd)
{
	while (str && *str != 0)
	{
		ft_putchar_fd(*str, fd);
		str++;
	}
}
