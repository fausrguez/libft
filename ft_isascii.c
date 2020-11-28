/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:08:37 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/28 12:46:31 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Test for an ASCII character, which is any character between
** 0 and octal 0177 inclusive.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
