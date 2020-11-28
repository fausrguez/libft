/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:09:18 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/28 12:45:50 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Tests for a decimal digit character.
*/

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
