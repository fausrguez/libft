/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 18:58:33 by farodrig      #+#    #+#                 */
/*   Updated: 2021/01/10 15:09:15 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	free_all(char **arr, unsigned int dimension)
{
	while (dimension--)
	{
		free(arr[dimension]);
	}
	free(arr);
}

static int	copy_buff(
	char **arr,
	unsigned int *dimension,
	char *buff,
	unsigned int buff_len
)
{
	buff[buff_len++] = 0;
	if (!(arr[*dimension] = (char *)ft_calloc(buff_len, sizeof(char))))
	{
		free(buff);
		free_all(arr, *dimension);
		return (0);
	}
	ft_strlcpy(arr[*dimension], buff, buff_len);
	free(buff);
	*dimension += 1;
	return (1);
}

static char	**str_split(
	char *str,
	char **arr,
	char c,
	size_t str_len
)
{
	char			*buff;
	unsigned int	buff_len;
	unsigned int	dimension;

	dimension = 0;
	while (*str)
	{
		if (!(buff = (char *)ft_calloc(str_len + 1, sizeof(char))))
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
			if (copy_buff(arr, &dimension, buff, buff_len) == 0)
				return (0);
		str++;
	}
	arr[dimension] = 0;
	return (arr);
}

/*
** Allocates (with malloc(3)) and returns an array of strings obtained by
** splitting 's' using the character 'c' as a delimiter. The array must be
** ended by a NULL pointer. Returns NULL if the allocation fails
*/

char		**ft_split(char const *str, char c)
{
	char	**arr;
	size_t	str_len;

	if (!str)
	{
		return (0);
	}
	str_len = ft_strlen(str);
	if (!(arr = (char **)ft_calloc(str_len + 1, sizeof(char *))))
	{
		return (0);
	}
	return (str_split((char *)str, arr, c, str_len));
}
