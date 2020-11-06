/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 21:54:18 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/06 11:04:46 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return (str + i);
		}
		i++;
	}
	if (str[i] == c)
	{
		return (str + i);
	}
	return (0);
}
