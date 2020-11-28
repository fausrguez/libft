/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.test.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 18:13:52 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/28 09:08:49 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

void	trigger_test(const char *test_description, \
void *str, t_lui len)
{
	char str_cpy[20];

	strcpy(str_cpy, str);
	print_test_str(test_description, str);
	bzero(str, len);
	bzero(str_cpy, len);
	if (memcmp(str, str_cpy, len) == 0)
	{
		print_success();
	}
	else
	{
		print_error("lib_result is not the same as the ft_result");
	}
	printf("lib_res -> |%s|\n", str);
	printf("ft_res  -> |%s|\n", str_cpy);
}

int		main(void)
{
	char str[20];

	print_function_info("bzero", "Writes n zeroed bytes to the string s.");
	trigger_test("Empty string", str, 18);
	strcpy(str, "To flama chiquillo");
	trigger_test("Regular string", str, 6);
	return (0);
}
