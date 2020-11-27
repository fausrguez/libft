/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_test_char.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 12:23:05 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 12:23:07 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test_suite.h"

void	print_test_char(const char *test_description, char c)
{
	print_test(test_description);
	printf("%c\n", c);
}
