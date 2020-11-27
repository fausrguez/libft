/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:11:22 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 15:02:46 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

int	is_the_same_result(int c)
{
	int	lib_res;
	int ft_res;

	lib_res = isprint(c);
	ft_res = ft_isprint(c);
	if (lib_res != ft_res)
	{
		print_error("The result of ft_isprint() \
and isprint() is not the same");
		print_result_int(lib_res, ft_res);
		return (0);
	}
	print_success();
	print_result_int(lib_res, ft_res);
	return (1);
}

int	valid_on_regular_char(int c)
{
	print_test_char("On Regular Char", c);
	return (is_the_same_result(c));
}

int	valid_on_other_char(int c)
{
	print_test_char("On Not printable Char", c);
	return (is_the_same_result(c));
}

int	main(void)
{
	int c;

	print_function_info("isprint", "Tests for \
any printing character, including space (` ')");
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
