/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:15:38 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/13 22:15:38 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*tmp_s1;
	const unsigned char	*tmp_s2;
	size_t				i;

	tmp_s1 = (const unsigned char *)s1;
	tmp_s2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (tmp_s1[i] != tmp_s2[i])
			return (tmp_s1[i] - tmp_s2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char a[] = "Hello";
//     char b[] = "Hella";
//     int res = ft_memcmp(a, b, 5);
//     printf("Result: %d\n", res);
//     res = ft_memcmp(a, b, 4);
//     printf("Result: %d\n", res); 
//     res = ft_memcmp(a, a, 5);
//     printf("Result: %d\n", res); 
//     return 0;
// }