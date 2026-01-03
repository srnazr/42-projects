/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 22:58:33 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/03 22:58:33 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int main(void)
// {
//     char test[] = {'A', 'z', '5', '%', ' '};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("ft_isalpha('%c') = %d\n", test[i], ft_isalpha(test[i]));
//     }
//     return 0;
// }