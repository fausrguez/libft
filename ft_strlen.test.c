/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.test.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 12:32:04 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 15:03:10 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

int	is_the_same_result(char *str)
{
	size_t	lib_res;
	t_lui	ft_res;

	lib_res = strlen(str);
	ft_res = ft_strlen(str);
	if (lib_res != ft_res)
	{
		print_error("The result of ft_strlen() and strlen() \
is not the same");
		printf("strlen -> %ld\n", lib_res);
		printf("ft_strlen -> %ld\n", ft_res);
		return (0);
	}
	else
	{
		print_success();
		printf("lib_res -> %ld\n", lib_res);
		printf("ft_res -> %ld\n", ft_res);
		return (1);
	}
}

int	valid_on_empty_string(char *str)
{
	print_test_str("On Empty String", str);
	return (is_the_same_result(str));
}

int	valid_on_regular_string(char *str)
{
	print_test_str("On Regular String", str);
	return (is_the_same_result(str));
}

int	main(void)
{
	char str[10];

	print_function_info("strlen", "Calculates the length of the\
	string pointed to by s, excluding the terminating null byte");
	strcpy(str, "");
	valid_on_empty_string(str);
	strcpy(str, "Try this");
	valid_on_regular_string(str);
}
