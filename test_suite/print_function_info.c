/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_function_info.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:52:14 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 11:52:16 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test_suite.h"

void	print_function_info(const char *name, const char *description)
{
	printf("\n\033[1;36m--- ft_%s vs %s ---\033[0m\n", name, name);
	printf("> %s\n", description);
}
