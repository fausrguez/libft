/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 18:42:16 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/15 17:47:57 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

int is_the_same_result(int c)
{
	int	lib_res;
	int ft_res;

	lib_res = isalpha(c);
	ft_res = ft_isalpha(c);

	if (lib_res != ft_res)
	{
		print_error("The result of ft_isalpha() and isalpha() is not the same");
		print_result_int(lib_res, ft_res);
		return (0);
	}

	print_success();
	print_result_int(lib_res, ft_res);
	return (1);
}

int valid_on_alpha(int c)
{
	print_test_char("On Alpha", c);
	return (is_the_same_result(c));
}

int valid_on_other_char(int c)
{
	print_test_char("On Other Char", c);
	return (is_the_same_result(c));
}

int main(void)
{
	int c;

	print_function_info("isalpha", "Tests for any character for which isupper(3) or islower(3) is true");
	c = '8';
	valid_on_other_char(c);
	c = '\\';
	valid_on_other_char(c);
	c = 'b';
	valid_on_alpha(c);
	c = 'k';
	valid_on_other_char(c);
}
