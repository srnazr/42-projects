/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:23:59 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/13 22:23:59 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tmp_s;
	size_t				i;

	tmp_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp_s[i] == (unsigned char)c)
			return ((void *)&tmp_s[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char data[] = "Hello World";
//     char *res;
//     res = ft_memchr(data, 'W', 11);
//     if (res)
//         printf("Found: %c\n", *res); 
//     else
//         printf("Not found\n");
//     res = ft_memchr(data, 'z', 11);
//     if (res)
//         printf("Found: %c\n", *res);
//     else
//         printf("Not found\n");
//     return 0;
// }