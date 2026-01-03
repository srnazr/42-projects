/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:24:33 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/03 23:24:33 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
		str[i++] = (unsigned char) c;
	return (s);
}

// int main(void)
// {
//     char buffer[10];
//     ft_memset(buffer, 'A', 9);
//     buffer[9] = '\0'; 
//     printf("After memset: %s\n", buffer); 
//     return 0;
// }