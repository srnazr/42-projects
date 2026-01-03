/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 22:40:34 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/03 22:40:34 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int main(void)
// {
//     int tests[] = {31, 32, 65, 126, 127};
//     for (int i = 0; i < 5; i++)
//         printf("ft_isprint(%d) = %d\n", tests[i], ft_isprint(tests[i]));
//     return 0;
// }