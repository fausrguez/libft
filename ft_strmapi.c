/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 15:45:53 by farodrig      #+#    #+#                 */
/*   Updated: 2021/02/05 12:42:55 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function 'f' to each character of the string 's' to create a new
** string (with malloc(3))resulting from successive applications of 'f'.
** Returns the string created from the successive applications of 'f' or NULL
** if the allocation fails.
*/

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;
	size_t			str_len;

	if (!str)
	{
		return (0);
	}
	str_len = ft_strlen(str);
	new_str = (char *)ft_calloc(str_len + 1, sizeof(char));
	if (!new_str)
	{
		return (0);
	}
	i = 0;
	while (i < str_len)
	{
		new_str[i] = f(i, str[i]);
		i++;
	}
	return (new_str);
}
