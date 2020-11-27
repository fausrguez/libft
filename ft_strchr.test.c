#include "libft.h"
#include "test_suite/test_suite.h"

void	trigger_test(const char *test_description, char *str, char c)
{
	char *ft_result;
	char *lib_result;

	print_test_cmp(test_description, str, &c);
	lib_result = strchr(str, c);
	ft_result = ft_strchr(str, c);
	if (lib_result == ft_result)
	{
		print_success();
	}	else
	{
		print_error("lib_result is not the same as the ft_result");
	}
	print_result_str(lib_result, ft_result);
}

int		main(void)
{
	char str[10];
	char c;

	print_function_info("strchr", "Returns a pointer to the first occurrence of the character c in the string s. return  a  pointer  to the  matched  character  or  NULL  if  the character is not found.");
	strcpy(str, "hello");
	c = '\0';
	trigger_test("Valid on c = NULL", str, c);
	c = 'l';
	trigger_test("Valid on c = l", str, c);
}

