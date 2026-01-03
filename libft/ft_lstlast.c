/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 02:36:38 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 02:36:38 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (lst == NULL)
		return (NULL);
	ptr = lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}

// int main(void)
// {
//     t_list *node1 = ft_lstnew(strdup("first"));
//     t_list *node2 = ft_lstnew(strdup("second"));
//     t_list *node3 = ft_lstnew(strdup("third"));
//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);
//     t_list *last = ft_lstlast(node1);
//     if (last)
//         printf("Last node: %s\n", (char *)last->content);
//     // Clean up
//     ft_lstclear(&node1, free);
//     return 0;
// }