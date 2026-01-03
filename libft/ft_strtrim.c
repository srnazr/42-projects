/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 00:48:19 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 00:48:19 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	ft_find(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (0);
		i++;
	}
	return (1);
}

static int	ft_strlength(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*tmp;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	j = ft_strlength(s1) - 1;
	while (s1[i] != '\0' && ft_find(set, s1[i]) == 0)
		i++;
	while (j >= i && ft_find(set, s1[j]) == 0)
		j--;
	tmp = (char *)malloc((j - i + 2) * sizeof(char));
	if (!tmp)
		return (NULL);
	while (i <= j)
	{
		tmp[k] = s1[i];
		i++;
		k++;
	}
	tmp[k] = '\0';
	return (tmp);
}

// int main(void)
// {
//     const char *str = "   Hello, World!   ";
//     const char *set = " ";
//     char *trimmed;
//     trimmed = ft_strtrim(str, set);
//     if (trimmed)
//     {
//         printf("Trimmed string: '%s'\n", trimmed);
//         free(trimmed);
//     }
//     else
//         printf("Failed to allocate memory\n");
//     return 0;
// }