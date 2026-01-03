/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 02:27:15 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 02:27:15 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr1;
	t_list	*ptr2;

	ptr1 = *lst;
	while (ptr1 != NULL)
	{
		ptr2 = ptr1->next;
		del(ptr1->content);
		free(ptr1);
		ptr1 = ptr2;
	}
	*lst = NULL;
}

// void del(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew(strdup("first"));
//     t_list *node2 = ft_lstnew(strdup("second"));
//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);
//     t_list *ptr = head;
//     while (ptr)
//     {
//         printf("%s\n", (char *)ptr->content);
//         ptr = ptr->next;
//     }
//     ft_lstclear(&head, del);
//     if (head == NULL)
//         printf("Done :D\n");
//     return 0;
// }