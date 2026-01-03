/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 23:35:26 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/13 23:35:26 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lendest;
	size_t	i;
	size_t	j;

	i = 0;
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dst);
	j = lendest;
	if (dstsize == 0)
		return (lensrc);
	if (dstsize <= lendest)
		return (dstsize + lensrc);
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (lendest + lensrc);
}
