/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:10:20 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/28 14:19:11 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Tests for any printing character, including space (` ').
*/

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
	{
		return (1);
	}
	return (0);
}
