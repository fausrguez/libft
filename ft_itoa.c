/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 09:14:35 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/12 10:43:14 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	count_digits(int n)
{
	int n_digits;
	
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

char					*ft_itoa(int n)
{
	unsigned int	n_digits;
	char			*str;

	n_digits = count_digits(n);
	
	if(!(str = (char*)ft_calloc(n_digits + 2, sizeof(char))))
	{
		return (0);
	}

	while (n != 0)
	{
		n /= 10;
		*str = n + '0';
		str++;
	}
	*str = 0;
	return (str);
}

int main()
{
	printf("|%s|", ft_itoa(1234));
}
