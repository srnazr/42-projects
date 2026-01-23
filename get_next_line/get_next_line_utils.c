/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:13:38 by szaarour          #+#    #+#             */
/*   Updated: 2026/01/03 14:13:38 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}

char	*ft_new_line(char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if ((char)c == '\0')
		return (str);
	return (NULL);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str2)
		return (free(str1), NULL);
	new = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!new)
		return (NULL);
	if (str1)
	{
		while (str1[i])
		{
			new[i] = str1[i];
			i++;
		}
	}
	while (str2[j])
		new[i++] = str2[j++];
	new[i] = '\0';
	free(str1);
	return (new);
}

char	*ft_substr(char	*str)
{
	int		i;
	char	*new_str;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	new_str = malloc(i * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		new_str[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		new_str[i++] = '\n';
	new_str[i] = '\0';
	return (new_str);
}
