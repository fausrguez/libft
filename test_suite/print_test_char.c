#include "test_suite.h"

void	print_test_char(const char *test_description, char c)
{
	print_test(test_description);
	printf("%c\n", c);
}