/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:56:54 by farodrig      #+#    #+#                 */
/*   Updated: 2020/10/26 16:39:41 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

long unsigned int	ft_strlen(const char *str)
{
	long unsigned int counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}
