/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:15:10 by szaarour          #+#    #+#             */
/*   Updated: 2026/01/03 14:15:10 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_strlen(char *str);
char	*ft_new_line(char *str, int c);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_substr(char *str);
char	*clean_up(char *str);
char	*get_line(int fd, char *str);
char	*get_next_line(int fd);

#endif
