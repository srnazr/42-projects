/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 23:19:05 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/13 23:19:05 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	ft_strlength(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	int		len;
	int		i;

	len = ft_strlength(s1);
	i = 0;
	tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	while (s1[i] != '\0')
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

// int main(void)
// {
//     char *original = "Hello Libft!";
//     char *copy;
//     copy = ft_strdup(original);
//     if (copy)
//     {
//         ft_putstr_fd(copy, 1);
//         ft_putchar_fd('\n', 1);
//         free(copy);
//     }
//     return 0;
// }