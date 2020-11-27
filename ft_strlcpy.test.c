/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 15:07:59 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 15:26:16 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_suite/test_suite.h"

void	trigger_test(const char *test_description,\
char *dest, char *src, unsigned int n)
{
	int		ft_result;
	int		lib_result;
	char	dest_cpy[20];
	char	src_cpy[20];

	strcpy(dest_cpy, dest);
	strcpy(src_cpy, src);
	print_test_cmp(test_description, dest, src);
	lib_result = strlcpy(dest, src, n);
	ft_result = ft_strlcpy(dest_cpy, src_cpy, n);
	if (lib_result == ft_result)
	{
		print_success();
	}
	else
	{
		print_error("lib_result is not the same as the ft_result");
	}
	printf("lib_result -> %d |%s|\n", lib_result, dest);
	printf("ft_result -> %d |%s|\n", ft_result, dest_cpy);
}

int		main(void)
{
	char dest[10];
	char src[10];

	print_function_info("strlcpy", "Copies up \
to dstsize - 1 characters from the string src to \
dst, NUL-terminating the result if dstsize is \
not 0. Returns the length of src");
	strcpy(src, "World");
	trigger_test("empty dest n=3", dest, src, 3);
	trigger_test("empty dest n=2", dest, src, 2);
	trigger_test("empty dest n=4", dest, src, 4);
	trigger_test("empty dest n=5", dest, src, 5);
	trigger_test("empty dest n=6", dest, src, 6);
	trigger_test("same size n=3", dest, src, 3);
	strcpy(dest, "Hello");
	trigger_test("dest size == src size n=4", dest, src, 4);
	trigger_test("dest size == src size n=5", dest, src, 5);
	trigger_test("dest size == src size n=6", dest, src, 6);
}
