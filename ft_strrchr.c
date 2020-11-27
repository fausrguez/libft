/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 11:27:05 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/06 11:27:08 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int c)
{
	unsigned int	i;
	int				last_location;

	i = 0;
	last_location = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			last_location = i;
		}
		i++;
	}
	if (str[i] == c)
	{
		last_location = i;
	}
	return (last_location > -1 ? str + last_location : 0);
}
