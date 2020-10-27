/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 22:42:24 by farodrig      #+#    #+#                 */
/*   Updated: 2020/10/27 22:42:26 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 40 && c <= 127)
	{
		return (1);
	}
	return (0);
}
