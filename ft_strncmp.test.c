/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:18:44 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 14:54:38 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

void	trigger_test(const char *test_description,\
char *str1, char *str2, unsigned int n)
{
	int		ft_result;
	int		lib_result;
	char	str1_cpy[20];
	char	str2_cpy[20];

	strcpy(str1_cpy, str1);
	strcpy(str2_cpy, str2);
	print_test_cmp(test_description, str1, str2);
	lib_result = strncmp(str1, str2, n);
	ft_result = ft_strncmp(str1_cpy, str2_cpy, n);
	if (lib_result == ft_result)
	{
		print_success();
	}
	else
	{
		print_error("lib_result is not the same as the ft_result");
	}
	print_result_int(lib_result, ft_result);
}

int		main(void)
{
	char			str1[10];
	char			str2[10];
	unsigned int	n;

	print_function_info("strncmp", "Compares not more than n \
character. Returns an integer greater than, equal to, or \
less than 0, according as the string s1 is greater than, \
equal to, or less than the string s2");
	strcpy(str1, "");
	strcpy(str2, "");
	n = 7;
	trigger_test("Both empty string n=7", str1, str2, n);
	strcpy(str1, "Hello");
	trigger_test("Content on first string n=7", str1, str2, n);
	strcpy(str2, "Hello");
	trigger_test("Same string content n =7", str1, str2, n);
	strcpy(str1, "");
	trigger_test("Content on second string n=7", str1, str2, n);
	n = 3;
	strcpy(str1, "Heyy");
	trigger_test("Content on both strings n=3", str1, str2, n);
}
