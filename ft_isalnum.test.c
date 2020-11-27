/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:07:05 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 15:02:27 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

int	is_the_same_result(int c)
{
	int	lib_res;
	int ft_res;

	lib_res = isalnum(c);
	ft_res = ft_isalnum(c);
	if (lib_res != ft_res)
	{
		print_error("The result of ft_isalnum() and isalnum() is not the same");
		print_result_int(lib_res, ft_res);
		return (0);
	}
	print_success();
	print_result_int(lib_res, ft_res);
	return (1);
}

int	valid_on_alpha(int c)
{
	print_test_char("On Alpha", c);
	return (is_the_same_result(c));
}

int	valid_on_other_char(int c)
{
	print_test_char("On Other Char", c);
	return (is_the_same_result(c));
}

int	valid_on_number(int c)
{
	print_test_char("On Number", c);
	return (is_the_same_result(c));
}

int	main(void)
{
	int c;

	print_function_info("isalnum", "Tests for any character \
for which isalpha(3) or isdigit(3) is true.");
	c = '8';
	valid_on_number(c);
	c = '\\';
	valid_on_other_char(c);
	c = 'b';
	valid_on_alpha(c);
	c = 'k';
	valid_on_alpha(c);
}
