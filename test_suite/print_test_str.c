/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_test_str.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:53:25 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 11:53:30 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test_suite.h"

void	print_test_str(const char *test_description, char *str)
{
	print_test(test_description);
	printf("|%s|\n", str);
}
