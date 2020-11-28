/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:19:49 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/28 14:26:52 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Converts an upper-case letter to the corresponding lower-case letter.
*/

int	ft_tolower(int c)
{
	if ((c >= 65 && c <= 90))
	{
		c += 32;
	}
	return (c);
}
