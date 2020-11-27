/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:18:44 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 12:45:11 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

void	trigger_test(const char *test_description,\
char *str1, char *str2, unsigned int n)
{
	char *ft_result;
	char *lib_result;
	char str1_cpy[20];
	char str2_cpy[20];

	strcpy(str1_cpy, str1);
	strcpy(str2_cpy, str2);
	print_test_cmp(test_description, str1, str2);
	lib_result = strcat(str1, str2);
	ft_result = ft_strcat(str1_cpy, str2_cpy);
	if (strcmp(lib_result, ft_result) == 0)
	{
		print_success();
	}
	else
	{
		print_error("lib_result is not the same as the ft_result");
	}
	print_result_str(lib_result, ft_result);
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
}
