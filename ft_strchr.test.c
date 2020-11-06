/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.test.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 06:19:47 by farodrig      #+#    #+#                 */
/*   Updated: 2020/10/29 08:45:52 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
// #include <bsd/string.h>
#define _GNU_SOURCE

char	*ft_strchr(char *str, int c);

void 				print_function_info(const char *name, const char *description)
{
	printf("\033[0;36m--- ft_%s vs %s ---\033[0m\n", name, name);
	printf("%s\n", description);
}

void 				print_error(const char *msg)
{
	printf("\033[0;31m[ERROR]> %s\033[0m\n", msg);
}

void 				print_success(const char *msg)
{
	printf("\033[0;32m[SUCCESS]> %s\033[0m\n", msg);
}

void 				trigger_test(const char *test_description, char *str, int c)
{
	char *ft_result;
	char *lib_result;

	printf("\n\033[0;33m[TEST]> %s: %s, %c \033[0m\n", test_description, str, c);
	lib_result = strchr(str, c);
	ft_result = ft_strchr(str, c);
	if (lib_result == ft_result)
	{
		print_success("lib_result is the same as ft_result");
	}	else
	{
		print_error("lib_result is not the same as the ft_result");
	}
	printf("lib_result -> %s |%s|\n", lib_result, str);
	printf("ft_result -> %s |%s|\n", ft_result, str);
}

int					main(void)
{
	char str[10];
	int c;

	print_function_info("strchr", "The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is `\0', the func-tions locate the terminating `\0'.");
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
