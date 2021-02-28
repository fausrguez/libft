/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 18:58:33 by farodrig      #+#    #+#                 */
/*   Updated: 2021/02/28 20:45:31 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	cpy_word(
	char **arr,
	size_t dimension,
	char *str,
	size_t w_len)
{
	arr[dimension] = ft_calloc((w_len + 1), sizeof(char));
	if (!arr[dimension])
	{
		return (0);
	}
	ft_strlcpy(arr[dimension], str, w_len + 1);
	return (1);
}

static size_t	count_words(char *str, char c)
{
	char	*last_c;
	size_t	words;

	last_c = str - 1;
	words = 0;
	while (str)
	{
		if (*str == c || *str == 0)
		{
			if (str - last_c > 1)
			{
				words++;
			}
			last_c = str;
			if (*str == 0)
			{
				break ;
			}
		}
		str++;
	}
	return (words);
}

static void	free_all(char **arr, size_t dimension)
{
	while (dimension)
	{
		free(arr[dimension]);
		dimension--;
	}
	free(arr);
}

static void	str_split(char **arr, char *str, char c, size_t n_words)
{
	char	*last_c;
	size_t	dimension;

	last_c = str - 1;
	dimension = 0;
	while (dimension < n_words)
	{
		if (*str == c)
		{
			if (str - last_c > 1)
			{
				if (!cpy_word(arr, dimension, last_c + 1, (str - last_c) - 1))
				{
					free_all(arr, dimension);
					return ;
				}
				dimension++;
			}
			last_c = str;
		}
		str++;
	}
	arr[dimension] = 0;
}

/*
** Allocates (with malloc(3)) and returns an array of strings obtained by
** splitting 's' using the character 'c' as a delimiter. The array must be
** ended by a NULL pointer. Returns NULL if the allocation fails
*/

char	**ft_split(char const *str, char c)
{
	char	**arr;
	size_t	n_words;

	n_words = count_words((char *)str, c);
	arr = ft_calloc(n_words + 1, sizeof(char *));
	if (!arr)
	{
		return (0);
	}
	str_split(arr, (char *)str, c, n_words);
	return (arr);
}
