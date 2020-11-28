/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:18:09 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/28 11:45:54 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lui	ft_strlcpy(char *dest, const char *src, t_lui size)
{
	t_lui i;

	if(dest == 0 && src == 0)
	{
		return (0);
	}
	if(size == 0)
	{
		return (ft_strlen(src));		
	}
	i = 0;
	while (i < (size - 1) && src[i] !='\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
