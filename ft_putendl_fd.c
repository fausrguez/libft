/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 16:35:33 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/12 16:54:57 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string 's' to the given filedescriptor, followed by a newline.
*/

void	ft_putendl_fd(char *str, int fd)
{
	if (str)
	{
		ft_putstr_fd(str, fd);
		ft_putchar_fd('\n', fd);
	}
}
