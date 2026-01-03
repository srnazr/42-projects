/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 01:01:42 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 01:01:42 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	ft_ctwords(const char *str, char c)
{
	int	ct;
	int	i;

	ct = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			ct++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (ct);
}

static void	ft_strncpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static void	ft_helper(char c, const char *s, char **strs, int *k)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			strs[*k] = (char *)malloc((j + 1) * sizeof(char));
			if (!strs[*k])
				return ;
			ft_strncpy(strs[*k], s + i, j);
			(*k)++;
			i += j;
		}
		else
			i++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		k;

	if (!s)
		return (NULL);
	strs = (char **)malloc((ft_ctwords(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	k = 0;
	ft_helper(c, s, strs, &k);
	strs[k] = NULL;
	return (strs);
}

// int main(void)
// {
//     char **words;
//     int i;
//     words = ft_split("hello world this is test", ' ');
//     i = 0;
//     while (words[i])
//     {
//         ft_putstr_fd(words[i], 1);
//         ft_putchar_fd('\n', 1);
//         i++;
//     }
//     return 0;
// }