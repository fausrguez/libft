/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 13:54:58 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/04 15:30:10 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	add_number(const char *str, int *res)
{
	while (ft_isdigit(*str))
	{
		if (*res == 0)
		{
			*res = (*str - '0');
		}
		else
		{
			*res = *res * 10 + (*str - '0');
		}
		str++;
	}
}

/*
** Converts the initial portion of the string pointed to by str to int
** representation.
*/

int			ft_atoi(const char *str)
{
	unsigned int	is_minus;
	int				res;

	res = 0;
	is_minus = 0;
	while ((*str == '\n') || (*str == '\t') || (*str == '\v') ||
		(*str == ' ') || (*str == '\f') || (*str == '\r'))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		is_minus = *str == '-' ? 1 : 0;
		str++;
	}
	if (ft_isdigit(*str))
	{
		add_number(str, &res);
		return (is_minus ? -res : res);
	}
	return (0);
}
