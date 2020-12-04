/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 15:41:53 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/04 15:47:51 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

/*
** Allocates sufficient memory for a copy of the string str1, does the copy,
** and returns a pointer to it.
*/

char	*ft_strdup(const char *str1)
{
	char	*str;
	t_lui	str1_len;

	str1_len = ft_strlen(str1) + 1;
	str = (char *)malloc(sizeof(char) * str1_len);
	if (str == 0)
	{
		return (0);
	}
	ft_strlcpy(str, str1, str1_len);
	return (str);
}
