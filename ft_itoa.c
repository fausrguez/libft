/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 09:14:35 by farodrig      #+#    #+#                 */
/*   Updated: 2021/02/28 20:57:13 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	absolute_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static unsigned int	count_digits(int n)
{
	int	n_digits;

	n_digits = 0;
	while (n != 0)
	{
		n /= 10;
		n_digits++;
	}
	return (n_digits);
}

/*
** Allocates (with malloc(3)) and returns a string representing the integer
** received as an argument. Negative numbers must be handled.
** Returns The string representing the integer.  NULL if the allocation fails.
*/

char	*ft_itoa(int n)
{
	unsigned int	n_digits;
	char			*str;

	n_digits = count_digits(n);
	str = (char*)ft_calloc(n_digits + 2, sizeof(char));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		n_digits++;
	}
	else if (n == 0)
	{
		str[0] = '0';
	}
	while (n != 0)
	{
		n_digits--;
		str[n_digits] = absolute_value((n % 10)) + '0';
		n /= 10;
	}
	return (str);
}
