/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 21:08:07 by farodrig      #+#    #+#                 */
/*   Updated: 2020/10/27 21:17:21 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c);
int	ft_isdigit(char c);

int	ft_isalnum(char c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (8);
	}
	return (0);
}
