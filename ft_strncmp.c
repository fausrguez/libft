/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:18:35 by farodrig      #+#    #+#                 */
/*   Updated: 2020/12/04 12:17:58 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares not more than n character. Returns an integer greater than,
** equal to, or less than 0, according as the string str1 is greater than,
** equal to, or less than the string str2.
*/

int	ft_strncmp(char *str1, char *str2, t_ui len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	t_ui			i;

	ptr1 = (unsigned char*)str1;
	ptr2 = (unsigned char*)str2;
	i = 0;
	while ((ptr1[i] || ptr2[i]) && i < len)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}
