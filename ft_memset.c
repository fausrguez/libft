/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:13:40 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 11:13:43 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *  ft_memset(void *str, int c, unsigned long int len)
{
    while (len--)
    {
        (*(char *))str[len - 1] = (unsigned char)c;        
    }
    return (str);
}

int main(void)
{
    char *str = "hello";
    ft_memset(str, 'n', 2);
    printf("%s", str);
}
