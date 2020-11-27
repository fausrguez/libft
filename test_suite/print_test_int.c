/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_test_int.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:53:04 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 11:53:06 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test_suite.h"

void	print_test_int(const char *test_description, int c)
{
	print_test(test_description);
	printf("%d\n", c);
}
