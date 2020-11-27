/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_test.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:53:13 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 11:53:16 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test_suite.h"

void	print_test(const char *test_description)
{
	printf("\n\033[0;33m[TEST]> %s: \033[0m", test_description);
}
