/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 02:51:20 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 02:51:20 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc((nmemb * size) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		*((char *)ptr + i) = 0;
		i++;
	}
	return (ptr);
}

// int main(void)
// {
//     int *arr;
//     size_t n = 5;

//     arr = (int *)ft_calloc(n, sizeof(int));
//     if (!arr)
//         return 1;

//     printf("New array:\n");
//     for (size_t i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");

//     free(arr);
//     return 0;
// }