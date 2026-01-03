/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 23:59:27 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/13 23:59:27 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlength(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	chr;

	i = ft_strlength(s);
	chr = (char) c;
	if (chr == '\0')
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == chr)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
