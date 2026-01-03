/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:06:19 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/03 23:06:19 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
		str[i++] = 0;
}

// int main(void)
// {
//     char arr[10] = {'a','b','c','d','e','f','g','h','i','j'};

//     printf("Before bzero:\n");
//     for (int i = 0; i < 10; i++)
//         printf("%c ", arr[i]);
//     printf("\n");

//     ft_bzero(arr, 5);

//     printf("After bzero:\n");
//     for (int i = 0; i < 10; i++)
//         printf("%d ", arr[i]);
//     printf("\n");

//     return 0;
// }