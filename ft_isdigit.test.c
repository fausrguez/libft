/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:12:18 by farodrig      #+#    #+#                 */
/*   Updated: 2020/10/26 18:13:40 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isdigit(char c);

int is_the_same_result(char c)
{
	int	lib_res;
	int ft_res;

	lib_res = isdigit(c);
	ft_res = ft_isdigit(c);

	if (lib_res != ft_res)
	{
		printf("\033[0;31m");
		printf("[ERROR]> The result of ft_isdigit() and isdigit() is not the same\n");
		printf("\033[0m");
		printf("lib_res -> %d\n", lib_res);
		printf("ft_res -> %d\n", ft_res);
		return (0);
	}

	printf("\033[0;32m");
	printf("[SUCCESS]> The result of ft_isdigit() and isdigit() is the same\n");
	printf("\033[0m");
	printf("lib_res -> %d\n", lib_res);
	printf("ft_res -> %d\n", ft_res);
	return (1);
}

int valid_on_number(char c)
{
	printf("\033[0;33m");
	printf("\n[TEST]> On Number\n");
	printf("\033[0m");
	return (is_the_same_result(c));
}

int valid_on_other_char(char c)
{
	printf("\033[0;33m");
	printf("\n[TEST]> On Other Char\n");
	printf("\033[0m");
	return (is_the_same_result(c));
}

int main(void)
{
	char c;

	printf("\033[0;36m");
	printf("--- ft_isdigit vs isdigit ---\n");
	printf("\033[0m");
	c = '8';
	valid_on_number(c);
	c = 'b';
	valid_on_other_char(c);
}
