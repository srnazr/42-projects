/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:00:55 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/03 23:00:55 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// int main(void)
// {
//     char test[] = {'A', 'z', '5', '%', ' '};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("ft_isalnum('%c') = %d\n", test[i], ft_isalnum(test[i]));
//     }
//     return 0;
// }