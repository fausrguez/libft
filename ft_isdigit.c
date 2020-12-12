/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:09:18 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/12 18:46:53 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Tests for a decimal digit character.
*/

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
