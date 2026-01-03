/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 02:32:38 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 02:32:38 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void del(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *node = ft_lstnew(strdup("hello"));
//     printf("Before: %s\n", (char *)node->content);
//     ft_lstdelone(node, del);
//     printf("Done :D\n");
//     return 0;
// }