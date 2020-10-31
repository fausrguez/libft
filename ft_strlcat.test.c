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

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#define _GNU_SOURCE

long unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);

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

void 				trigger_test(const char *test_description, char *dest, char *src)
{
	long unsigned int ft_result;
	long unsigned int lib_result;
	char dest_cpy[20];
	char src_cpy[20];

	strcpy(dest_cpy, dest);
	strcpy(src_cpy, src);
	printf("\n\033[0;33m[TEST]> %s: %s, %s \033[0m\n", test_description, dest, src);
	lib_result = strlcat(dest, src, sizeof(dest_cpy));
	ft_result = ft_strlcat(dest_cpy, src_cpy, sizeof(dest_cpy));
	if (lib_result == ft_result)
	{
		print_success("lib_result is the same as ft_result");
	}	else
	{
		print_error("lib_result is not the same as the ft_result");
	}
	printf("lib_result -> %ld |%s|\n", lib_result, dest);
	printf("ft_result -> %ld |%s|\n", ft_result, dest_cpy);
}

int					main(void)
{
	char src[10];
	char dest[10];

	print_function_info("strlcat", "The  strlcat()  function  appends  the src string to the dest string, overwriting the terminating null byte ('\\0') at the end of dest, and then adds a terminating null byte.");
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
