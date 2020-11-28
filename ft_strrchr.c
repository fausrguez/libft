/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:19:24 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/28 14:29:01 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** The strrchr() function locates the last occurrence of c (converted to a
** char) in the string pointed to by s. The terminating null character is
** considered to be part of the string; therefore if c is `\0', the functions
** locate the terminating `\0'.
*/

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
