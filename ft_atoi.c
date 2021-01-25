/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 13:54:58 by farodrig      #+#    #+#                 */
/*   Updated: 2021/01/25 11:53:21 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static void	add_number(const char *str, long *res)
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

static char	*skip_empty_characters(const char *str)
{
	while ((*str == '\n') || (*str == '\t') || (*str == '\v') ||
		(*str == ' ') || (*str == '\f') || (*str == '\r'))
	{
		str++;
	}
	return ((char *)str);
}

/*
** Converts the initial portion of the string pointed to by str to int
** representation.
*/

int			ft_atoi(const char *str)
{
	unsigned int	is_neg;
	long			res;

	res = 0;
	is_neg = 0;
	str = skip_empty_characters(str);
	if (*str == '-' || *str == '+')
	{
		is_neg = *str == '-' ? 1 : 0;
		str++;
	}
	if (ft_isdigit(*str))
	{
		add_number(str, &res);
		res = is_neg ? -res : res;
		if ((res < INT_MIN && res > -LONG_MAX) || res >= LONG_MAX)
		{
			return (-1);
		}
		return (res > INT_MAX || res <= -LONG_MAX ? 0 : res);
	}
	return (0);
}
