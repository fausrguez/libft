/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.test.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 15:31:30 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 16:44:59 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

void	trigger_test(const char *test_description, \
void *str, int c, t_lui len)
{
	char *ft_result;
	char *lib_result;
	char str_cpy[20];

	strcpy(str_cpy, str);
	print_test_str(test_description, str);
	lib_result = memset(str, c, len);
	ft_result = ft_memset(str_cpy, c, len);
	if (memcmp(lib_result, ft_result, len) == 0)
	{
		print_success();
	}
	else
	{
		print_error("lib_result is not the same as the ft_result");
	}
	print_result_str(lib_result, ft_result);
	printf("lib_res -> |%lu|\n", sizeof lib_result);
	printf("ft_res -> |%lu|\n", sizeof ft_result);
}

int		main(void)
{
	char str[20];
	print_function_info("memset", "Writes len \
bytes of value c (converted to an unsigned char) \
to the string b. Returns its first argument");

	trigger_test("Empty string", str, 'c', 18);
	return (0);
}
