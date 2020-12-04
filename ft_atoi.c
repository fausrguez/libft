/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 13:54:58 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/04 21:03:05 by farodrig      ########   odam.nl         */
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
	int				res;

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
		return (is_neg ? -res : res);
	}
	return (0);
}
