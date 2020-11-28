/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:20:05 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/28 14:27:12 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Converts a lower-case letter to the corresponding upper-case letter.
*/

int	ft_toupper(int c)
{
	if ((c >= 97 && c <= 122))
	{
		c -= 32;
	}
	return (c);
}
