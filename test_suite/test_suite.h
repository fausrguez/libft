#ifndef TEST_SUITE
#	define TEST_SUITE
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	print_error(const char *msg);
void	print_function_info(const char *name, const char *description);
void	print_result_int(int lib_res, int ft_res);
void	print_result_str(char *lib_res, char *ft_res);
void	print_success();
void	print_test_char(const char *test_description, char c);
void	print_test_cmp(const char *test_description, char *str1, char *str2);
void	print_test_str(const char *test_description, char *str);
void	print_test_int(const char *test_description, int c);
void	print_test(const char *test_description);

#endif