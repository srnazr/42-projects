/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 23:49:05 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/13 23:49:05 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			chr;

	chr = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == chr)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == chr)
		return ((char *) &s[i]);
	else
		return (NULL);
}

// int main(void)
// {
//     char *str = "hello world";
//     char *res;
//     res = ft_strchr(str, 'o');
//     if (res)
//         ft_putstr_fd(res, 1);
//     ft_putchar_fd('\n', 1);
//     res = ft_strchr(str, 'z');
//     if (!res)
//         ft_putstr_fd("Not found\n", 1);
//     return 0;
// }