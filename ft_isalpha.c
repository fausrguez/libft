/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:07:38 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/12 18:46:38 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Tests for any character for which isupper(3) or islower(3) is true.
*/

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
