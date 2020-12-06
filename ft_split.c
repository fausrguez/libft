/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 18:58:33 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/06 19:34:58 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** Allocates (with malloc(3)) and returns an arrayof strings obtained by
** splitting 's' using the character 'c' as a delimiter. The array must beended
** by a NULL pointer. Returns NULL if the allocation fails
*/

static void	free_all(char **arr, unsigned int dimension)
{
	while (dimension--)
	{
		free(arr[dimension]);
	}
	free(arr);
}

char		**ft_split(char const *str, char c)
{
	char			**arr;
	size_t			str_len;
	char			*buff;
	unsigned int	buff_len;
	unsigned int	dimension;

	if (!str)
	{
		return (0);
	}
	str_len = ft_strlen(str);
	if (!(arr = (char **)malloc(sizeof(char*) * str_len + 1)))
	{
		return (0);
	}
	dimension = 0;
	while (*str)
	{
		if (!(buff = (char *)malloc(sizeof(char) * str_len + 1)))
		{
			free_all(arr, dimension);
			return (0);
		}
		buff_len = 0;
		while (*str && *str != c)
		{
			buff[buff_len++] = *str;
			str++;
		}
		if (buff_len > 0)
		{
			buff[buff_len++] = 0;
			if (!(arr[dimension] = (char *)malloc(sizeof(char) * buff_len)))
			{
				free(buff);
				free_all(arr, dimension);
				return (0);
			}
			ft_strlcpy(arr[dimension], buff, buff_len);
			free(buff);
			buff_len = 0;
			dimension++;
		}
		str++;
	}
	arr[dimension] = 0;
	return (arr);
}
