/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.test.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 06:19:47 by farodrig      #+#    #+#                 */
/*   Updated: 2020/10/29 08:45:52 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

void	trigger_test(const char *test_description, char *dest, char *src)
{
	long unsigned int ft_result;
	long unsigned int lib_result;
	char dest_cpy[20];
	char src_cpy[20];

	strcpy(dest_cpy, dest);
	strcpy(src_cpy, src);
	print_test_cmp(test_description ,dest, src);
	lib_result = strlcat(dest, src, sizeof(dest_cpy));
	ft_result = ft_strlcat(dest_cpy, src_cpy, sizeof(dest_cpy));
	if (lib_result == ft_result)
	{
		print_success();
	}	else
	{
		print_error("lib_result is not the same as the ft_result");
	}
	printf("lib_result -> %ld |%s|\n", lib_result, dest);
	printf("ft_result -> %ld |%s|\n", ft_result, dest_cpy);
}

int		main(void)
{
	char src[15];
	char dest[15];

	print_function_info("strlcat", "Appends  the src string to the dest string, overwriting the terminating null byte ('\\0') at the end of dest, and then adds a terminating null byte.");
	strcpy(src, "\0");
	strcpy(dest, "\0");
	trigger_test("Valid on both empty", dest, src);
	strcpy(src, "Example");
	trigger_test("Valid on empty dest", dest, src);
	strcpy(dest, "A");
	trigger_test("Valid on final size smaller than destination size", dest, src);
	strcpy(dest, "The");
	trigger_test("Valid on final size equal to destination size", dest, src);
	strcpy(dest, "Last");
	trigger_test("Valid on final size bigger than destination size", dest, src);
	return (0);
}
