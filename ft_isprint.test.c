/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 21:44:24 by farodrig      #+#    #+#                 */
/*   Updated: 2020/10/27 21:58:39 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c);

int is_the_same_result(int c)
{
	int	lib_res;
	int ft_res;

	lib_res = isprint(c);
	ft_res = ft_isprint(c);

	if (lib_res != ft_res)
	{
		printf("\033[0;31m");
		printf("[ERROR]> The result of ft_isprint() and isprint() is not the same\n");
		printf("\033[0m");
		printf("lib_res -> %d\n", lib_res);
		printf("ft_res -> %d\n", ft_res);
		return (0);
	}

	printf("\033[0;32m");
	printf("[SUCCESS]> The result of ft_isprint() and isprint() is the same\n");
	printf("\033[0m");
	printf("lib_res -> %d\n", lib_res);
	printf("ft_res -> %d\n", ft_res);
	return (1);
}

int valid_on_regular_char(int c)
{
	printf("\033[0;33m");
	printf("\n[TEST]> On Regular Char %c\n", c);
	printf("\033[0m");
	return (is_the_same_result(c));
}

int valid_on_other_char(int c)
{
	printf("\033[0;33m");
	printf("\n[TEST]> On Not printable Char: %c\n", c);
	printf("\033[0m");
	return (is_the_same_result(c));
}

int main(void)
{
	int c;

	printf("\033[0;36m");
	printf("--- ft_isprint vs isprint ---\n");
	printf("\033[0m");
	c = '\\';
	valid_on_regular_char(c);
	c = 'b';
	valid_on_regular_char(c);
	c = 'k';
	valid_on_regular_char(c);
	c = '\n';
	valid_on_other_char(c);
	c = '\0';
	valid_on_other_char(c);
	c = '\t';
	valid_on_other_char(c);
}
