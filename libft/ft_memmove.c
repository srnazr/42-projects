/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:35:05 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/03 23:35:05 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*tmp_src;
	unsigned char		*tmp_dest;

	if (!src && !dest)
		return (NULL);
	tmp_src = (const unsigned char *)src;
	tmp_dest = (unsigned char *)dest;
	if (tmp_dest < tmp_src)
		return (ft_memcpy(dest, src, n));
	while (n--)
	{
		tmp_dest[n] = tmp_src[n];
	}
	return (dest);
}

// int main(void)
// {
//     char str[] = "123456789";
//     ft_memmove(str + 2, str, 5); 
//     str[7] = '\0'; 
//     printf("After memmove: %s\n", str); 
//     return 0;
// }