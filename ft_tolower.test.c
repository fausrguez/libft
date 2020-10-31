/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 22:31:32 by farodrig      #+#    #+#                 */
/*   Updated: 2020/10/27 22:31:34 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c);

int is_the_same_result(int c)
{
	int	lib_res;
	int ft_res;

	lib_res = tolower(c);
	ft_res = ft_tolower(c);

	if (lib_res != ft_res)
	{
		printf("\033[0;31m");
		printf("[ERROR]> The result of ft_tolower() and tolower() is not the same\n");
		printf("\033[0m");
		printf("lib_res -> %d\n", lib_res);
		printf("ft_res -> %d\n", ft_res);
		return (0);
	}

	printf("\033[0;32m");
	printf("[SUCCESS]> The result of ft_tolower() and tolower() is the same\n");
	printf("\033[0m");
	printf("lib_res -> %d\n", lib_res);
	printf("ft_res -> %d\n", ft_res);
	return (1);
}

int valid_on_alpha(int c)
{
	printf("\033[0;33m");
	printf("\n[TEST]> On Alpha %c\n", c);
	printf("\033[0m");
	return (is_the_same_result(c));
}

int valid_on_other_char(int c)
{
	printf("\033[0;33m");
	printf("\n[TEST]> On Other Char: %c\n", c);
	printf("\033[0m");
	return (is_the_same_result(c));
}

int main(void)
{
	int c;

	printf("\033[0;36m");
	printf("--- ft_tolower vs tolower ---\n");
	printf("\033[0m");
	c = '8';
	valid_on_other_char(c);
	c = '\\';
	valid_on_other_char(c);
	c = 'b';
	valid_on_alpha(c);
	c = 'K';
	valid_on_other_char(c);
	c = 'B';
	valid_on_alpha(c);
	c = 'k';
	valid_on_other_char(c);
}
