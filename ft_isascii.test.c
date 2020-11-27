/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:08:55 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 15:02:34 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

int	is_the_same_result(char c)
{
	int	lib_res;
	int ft_res;

	lib_res = isascii(c);
	ft_res = ft_isascii(c);
	if (lib_res != ft_res)
	{
		print_error("The result of ft_isascii() and isascii() is not the same");
		print_result_int(lib_res, ft_res);
		return (0);
	}
	print_success();
	print_result_int(lib_res, ft_res);
	return (1);
}

int	valid_on_ascii(char c)
{
	print_test_char("On Ascii", c);
	return (is_the_same_result(c));
}

int	valid_on_other_char(char c)
{
	print_test_char("On Other Char", c);
	return (is_the_same_result(c));
}

int	main(void)
{
	int c;

	print_function_info("isascii", "Test for an ASCII \
character, which is any character between \
0 and octal 0177 inclusive");
	c = '8';
	valid_on_ascii(c);
	c = 'b';
	valid_on_ascii(c);
	c = 0x7e;
	valid_on_ascii(c);
	c = 128;
	valid_on_other_char(c);
	c = 0x80;
	valid_on_other_char(c);
}
