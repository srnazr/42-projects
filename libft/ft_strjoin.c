/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 23:25:48 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/13 23:25:48 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>

static int	ft_strlength(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*jstr;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlength(s1) + ft_strlength(s2) + 1;
	jstr = malloc(sizeof(char) * len);
	if (!jstr)
		return (NULL);
	ft_strcpy(jstr, s1);
	ft_strcpy(jstr + ft_strlength(s1), s2);
	return (jstr);
}

// int main(void)
// {
//     char *s1 = "Hello, ";
//     char *s2 = "World!";
//     char *joined;
//     joined = ft_strjoin(s1, s2);
//     if (joined)
//     {
//         ft_putstr_fd(joined, 1);
//         ft_putchar_fd('\n', 1);
//         free(joined);
//     }
//     return 0;
// }