/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_test_cmp.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 12:24:53 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 12:24:55 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test_suite.h"

void	print_test_cmp(const char *test_description, char *str1, char *str2)
{
	print_test(test_description);
	printf("|%s|, |%s|\n", str1, str2);
}
