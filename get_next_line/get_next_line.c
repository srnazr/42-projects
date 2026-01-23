/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:15:07 by szaarour          #+#    #+#             */
/*   Updated: 2026/01/03 14:15:07 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*clean_up(char *str)
{
	char	*new_str;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
		return (free(str), NULL);
	i++;
	new_str = malloc(ft_strlen(str + i) * sizeof(char) + 1);
	if (!new_str)
		return (free(str), NULL);
	j = 0;
	while (str[i])
		new_str[j++] = str[i++];
	new_str[j] = '\0';
	free(str);
	return (new_str);
}

char	*get_line(int fd, char *str)
{
	char	*line;
	int		chars_read;

	line = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line)
		return (free(str), NULL);
	chars_read = 1;
	while (!ft_new_line(str, '\n') && chars_read > 0)
	{
		chars_read = read(fd, line, BUFFER_SIZE);
		if (chars_read == 0)
			break;
		if (chars_read < 0)
			return (free(line), free(str), NULL);
		line[chars_read] = '\0';
		str = ft_strjoin(str, line);
		if (!str)
			return (free(line), NULL);
	}
	free(line);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = get_line(fd, stash);
	if (!stash || stash[0] == '\0')
    	return (free(stash), stash = NULL, NULL);
	line = ft_substr(stash);
	stash = clean_up(stash);
	return (line);
}
