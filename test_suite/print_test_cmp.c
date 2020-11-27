#include "test_suite.h"

void	print_test_cmp(const char *test_description, char *str1, char *str2)
{
	print_test(test_description);
	printf("|%s|, |%s|\n", str1, str2);
}