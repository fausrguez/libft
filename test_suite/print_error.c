/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_error.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:52:03 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 11:52:06 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test_suite.h"

void	print_error(const char *msg)
{
	printf("\033[0;31m[ERROR]> %s\033[0m\n", msg);
}
