/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 22:47:44 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/03 22:47:44 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int main(void)
// {
//     int tests[] = {'0', '5', '9', 'a', ' '};
//     for (int i = 0; i < 5; i++)
//         printf("ft_isdigit(%c) = %d\n", tests[i], ft_isdigit(tests[i]));
//     return 0;
// }