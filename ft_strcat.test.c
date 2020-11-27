/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.test.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:16:26 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 15:02:51 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

void	trigger_test(const char *test_description, char *dest, char *src)
{
	char *ft_result;
	char *lib_result;
	char dest_cpy[20];
	char src_cpy[20];

	strcpy(dest_cpy, dest);
	strcpy(src_cpy, src);
	print_test_cmp(test_description, dest, src);
	lib_result = strcat(dest, src);
	ft_result = ft_strcat(dest_cpy, src_cpy);
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
	char src[15];
	char dest[15];

	print_function_info("strcat", "Appends the src \
string to the dest string, overwriting the \
terminating null byte ('\\0') at the end of dest, \
and then adds a terminating null byte.");
	strcpy(src, "\0");
	strcpy(dest, "\0");
	trigger_test("Valid on both empty", dest, src);
	strcpy(src, "Example");
	trigger_test("Valid on empty dest", dest, src);
	strcpy(dest, "A");
	trigger_test("Valid on final size < destination size", dest, src);
	strcpy(dest, "The");
	trigger_test("Valid on final size == destination size", dest, src);
	strcpy(dest, "Last");
	trigger_test("Valid on final size > destination size", dest, src);
	return (0);
}
