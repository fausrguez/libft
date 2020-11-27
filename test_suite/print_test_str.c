#include "test_suite.h"

void	print_test_str(const char *test_description, char *str)
{
	print_test(test_description);
	printf("|%s|\n", str);
}