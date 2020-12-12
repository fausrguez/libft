/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:10:20 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/12 18:47:15 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Tests for any printing character, including space (` ').
*/

int	ft_isprint(int c)
{
	return ((c >= 32 && c <= 126));
}
