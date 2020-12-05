/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 21:04:16 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/04 21:21:30 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	trim_chars_from_beginning(char *str, const char *set)
{
	while(*str)
	{
		
		str++;
	}
}

/*
** Allocates (with malloc(3)) and returns a copy of 's1' with the characters 
** specified in 'set' removedfrom the beginning and the end of the string.
** Returns NULL if the allocation fails.
*/

char	*ft_strtrim(char const *str1, char const *set)
{
	char	*str;
	size_t	str1_len;

	str1_len = ft_strlen(str1);
	str = (char *)malloc(sizeof(char) * str1_len + 1);
	if (str == 0)
	{
		return (0);
	}
	trim_chars_from_beginning(str, set);
	trim_chars_from_end(str, set);
	return (str);
}
