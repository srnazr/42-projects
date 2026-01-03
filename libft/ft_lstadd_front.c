/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 02:20:30 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 02:20:30 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew("first");
//     t_list *node2 = ft_lstnew("second");
//     ft_lstadd_front(&head, node1);
//     ft_lstadd_front(&head, node2);
//     t_list *ptr = head;
//     while (ptr)
//     {
//         printf("%s\n", (char *)ptr->content);
//         ptr = ptr->next;
//     }
//     return 0;
// }