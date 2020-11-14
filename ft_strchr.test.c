#include <stdio.h>
#include <string.h>

char *ft_strchr(char *str, char c);

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

void 				trigger_test(const char *test_description, char *str, char c)
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
	printf("lib_result -> |%s|\n", lib_result);
	printf("ft_result -> |%s|\n", ft_result);
}

int	main(void)
{
	char str[10];
	char c;

	print_function_info("strchr", "The strchr() function returns a pointer to the first occur‐rence of the character c in the string s. return  a  pointer  to the  matched  character  or  NULL  if  the character is not found.");
	strcpy(str, "hello");
	c = '\0';
	trigger_test("Valid on c = NULL", str, c);
	c = 'l';
	trigger_test("Valid on c = l", str, c);
}

