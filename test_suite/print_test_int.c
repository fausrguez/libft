#include "test_suite.h"

void	print_test_int(const char *test_description, int c)
{
	print_test(test_description);
	printf("%d\n", c);
}