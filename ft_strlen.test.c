/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.test.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:03:12 by farodrig      #+#    #+#                 */
/*   Updated: 2020/10/26 16:54:05 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long unsigned int ft_strlen(const char *str);

int is_the_same_result(char *str)
{
	size_t lib_len;
	long unsigned int ft_len;

	lib_len = strlen(str);
	ft_len = ft_strlen(str);
	if (lib_len != ft_len)
	{
		printf("\033[0;31m");
		printf("[ERROR]> The result of ft_strlen() and strlen() is not the same\n");
		printf("\033[0m");
		printf("strlen -> %ld\n", lib_len);
		printf("ft_strlen -> %ld\n", ft_len);
		return 0;
	}
	else
	{
		printf("\033[0;32m");
		printf("[SUCCESS]> The result of ft_strlen() and strlen() is the same\n");
		printf("\033[0m");
		printf("strlen -> %ld\n", lib_len);
		printf("ft_strlen -> %ld\n", ft_len);
		return 1;
	}
}

int	valid_on_empty_string(char *str)
{
	printf("\033[0;33m");
	printf("\n[TEST]> On Empty String\n");
	printf("\033[0m");
	return (is_the_same_result(str));
}

int	valid_on_regular_string(char *str)
{
	printf("\033[0;33m");
	printf("\n[TEST]> On Regular String\n");
	printf("\033[0m");
	return (is_the_same_result(str));
}

int main(void)
{
	char *str;
	char *str_loc;

	printf("\033[0;36m");
	printf("--- ft_strlen vs strlen ---\n");
	printf("\033[0m");
	printf("The strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte.\n");

	str = (char *)malloc(sizeof(char) * (8 + 1));
	if (str == NULL)
	{
		printf("\033[0;31m");
		printf("[ERROR]> Malloc returned NULL");
		printf("\033[0m");
		free(str);
		exit(1);
		return 1;
	}

	if(!valid_on_empty_string(str)) {
		free(str);
		exit(1);
		return(1);
	}

	str_loc = str;
	str = "Try this\0";

	if(!valid_on_regular_string(str)) {
		free(str_loc);
		exit(1);
		return (1);
	}
	
	free(str_loc);
	exit(0);
	return (0);
}
