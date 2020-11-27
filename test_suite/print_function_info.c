#include "test_suite.h"

void	print_function_info(const char *name, const char *description)
{
	printf("\n\033[1;36m--- ft_%s vs %s ---\033[0m\n", name, name);
	printf("> %s\n", description);
}