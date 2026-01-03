/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:45:14 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/13 22:45:14 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_countdigits(int n)
{
	int	ct;

	ct = 0;
	if (n <= 0)
		ct = 1;
	while (n != 0)
	{
		ct++;
		n = n / 10;
	}
	return (ct);
}

static void	ft_strncpy(char *str, const char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		str[i] = (char)src[i];
		i++;
	}
	str[i] = '\0';
}

static char	*ft_strinv(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (str[j] != '\0')
		j++;
	j--;
	while (j > i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

static void	ft_conv(int n, int *i, char *num)
{
	int				neg;
	unsigned int	un;

	neg = 0;
	if (n < 0)
	{
		neg = 1;
		un = (unsigned int)(- (long)n);
	}
	else
		un = (unsigned int)n;
	while (un != 0)
	{
		num[(*i)++] = un % 10 + '0';
		un = un / 10;
	}
	if (neg)
		num[(*i)++] = '-';
	num[*i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*nb;
	int		i;

	if (n == -2147483648)
	{
		nb = (char *)malloc(12 * sizeof(char));
		ft_strncpy(nb, "-2147483648", 11);
		return (nb);
	}
	if (n <= 0)
		nb = (char *)malloc((ft_countdigits(n) + 1) * sizeof(char));
	else
		nb = (char *)malloc((ft_countdigits(n) + 1) * sizeof(char));
	if (!nb)
		return (NULL);
	i = 0;
	if (n == 0)
	{
		nb[0] = '0';
		nb[1] = '\0';
		return (nb);
	}
	ft_conv(n, &i, nb);
	return (ft_strinv(nb));
}

int main(void)
{
    int numbers[] = {0, 123, -456, 2147483647, -2147483648};
    for (int i = 0; i < 5; i++)
        printf("ft_itoa(%d) = %s\n", numbers[i], ft_itoa(numbers[i]));
    return 0;
}