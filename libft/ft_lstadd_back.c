/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 02:09:15 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 02:09:15 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!new)
		return ;
	ptr = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}

// int main(void)
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew("first");
//     t_list *node2 = ft_lstnew("second");
//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);
//     t_list *ptr = head;
//     while (ptr)
//     {
//         printf("%s\n", (char *)ptr->content);
//         ptr = ptr->next;
//     }
//     return 0;
// }