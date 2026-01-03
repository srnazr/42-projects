/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:38:57 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/13 22:38:57 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sym;
	int	nb;

	i = 0;
	sym = 1;
	nb = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sym *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	return (nb * sym);
}

// int main(void)
// {
//     const char *str1 = "   -12345";
//     const char *str2 = "42";
//     const char *str3 = "+987";

//     printf("%d\n", ft_atoi(str1));
//     printf("%d\n", ft_atoi(str2));
//     printf("%d\n", ft_atoi(str3));

//     return 0;
// }