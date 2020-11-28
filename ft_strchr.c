/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:16:53 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/28 14:29:47 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns a pointer to the first occurrence of the character c
** in the string s. Returns a pointer to the matched character or NULL if
** the character is not found.
*/

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
