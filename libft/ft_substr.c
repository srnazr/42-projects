/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 00:29:23 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 00:29:23 by szaarour         ###   ########.fr       */
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

static char	*ft_alloc(void)
{
	char	*tmp;

	tmp = (char *)malloc(1);
	if (!tmp)
		return (NULL);
	tmp[0] = '\0';
	return (tmp);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	unsigned int	j;
	unsigned int	str_len;

	str_len = (unsigned int) ft_strlength(s);
	if (start >= str_len)
		return (ft_alloc());
	if (str_len - start < len)
		substr = (char *)malloc((str_len - start + 1) * sizeof(char));
	else
		substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i] != '\0')
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}

// int main(void)
// {
//     const char *str = "Hello, World!";
//     unsigned int start = 7;
//     size_t len = 5;
//     char *sub;
//     sub = ft_substr(str, start, len);
//     if (sub)
//     {
//         printf("Substring: %s\n", sub);
//         free(sub);
//     }
//     else
//         printf("Failed to allocate substring\n");
//     return 0;
// }