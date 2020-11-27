/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <farodrig@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 11:18:35 by farodrig      #+#    #+#                 */
/*   Updated: 2020/11/27 11:18:39 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int c;

	if (n == 0)
	{
		return (0);
	}
	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' &&
		s1[c] == s2[c] && c < n - 1)
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
