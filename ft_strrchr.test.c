/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:19:32 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 14:54:52 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

void	trigger_test(const char *test_description, char *str, int c)
{
	char *ft_result;
	char *lib_result;

	printf("\n\033[0;33m[TEST]> %s: %s, %c \033[0m\n", \
	test_description, str, c);
	lib_result = strrchr(str, c);
	ft_result = ft_strrchr(str, c);
	if (lib_result == ft_result)
	{
		print_success("lib_result is the same as ft_result");
	}
	else
	{
		print_error("lib_result is not the same as the ft_result");
	}
	printf("lib_result -> %s |%s|\n", lib_result, str);
	printf("ft_result -> %s |%s|\n", ft_result, str);
}

int		main(void)
{
	char	str[10];
	int		c;

	print_function_info("strrchr", "The strrchr() \
function locates the last occurrence of c \
(converted to a char) in the string pointed to by s. \
The terminating null character is considered to be part \
of the string; therefore if c is `\0', the func-tions  \
locate the terminating `\0'.");
	c = '\0';
	strcpy(str, "\0");
	trigger_test("Valid on both empty", str, c);
	strcpy(str, "hello");
	c = 'l';
	trigger_test("Valid on c = 'l'", str, c);
	c = '9';
	trigger_test("Valid on c = 9", str, c);
	return (0);
}
