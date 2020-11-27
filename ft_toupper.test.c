/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:20:12 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 15:05:21 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

int	is_the_same_result(int c)
{
	int	lib_res;
	int ft_res;

	lib_res = toupper(c);
	ft_res = ft_toupper(c);
	if (lib_res != ft_res)
	{
		print_error("The result of ft_toupper() \
and toupper() is not the same");
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

int	main(void)
{
	int c;

	print_function_info("toupper", "Converts a lower-case\
letter to the corresponding upper-case letter");
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
