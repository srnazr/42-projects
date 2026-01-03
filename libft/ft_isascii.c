/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 22:56:38 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/03 22:56:38 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main(void)
// {
//     int tests[] = {65, 128, -1, 0, 127};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("ft_isascii(%d) = %d\n", tests[i], ft_isascii(tests[i]));
//     }
//     return 0;
// }