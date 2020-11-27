/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:12:18 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/15 17:00:38 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

int is_the_same_result(char c)
{
	int	lib_res;
	int ft_res;

	lib_res = isdigit(c);
	ft_res = ft_isdigit(c);

	if (lib_res != ft_res)
	{
		print_error("The result of ft_isdigit() and isdigit() is not the same");
		print_result_int(lib_res, ft_res);
		return (0);
	}

	print_success();
	print_result_int(lib_res, ft_res);
	return (1);
}

int valid_on_number(char c)
{
	print_test_char("On Number", c);
	return (is_the_same_result(c));
}

int valid_on_other_char(char c)
{
	print_test_char("On Other Char", c);
	return (is_the_same_result(c));
}

int main(void)
{
	char c;

	print_function_info("isdigit", "Tests for a decimal digit character");
	c = '8';
	valid_on_number(c);
	c = 'b';
	valid_on_other_char(c);
}
