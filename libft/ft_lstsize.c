/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 02:48:30 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 02:48:30 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		size;

	ptr = lst;
	size = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	return (size);
}

// int main(void)
// {
//     t_list *head = ft_lstnew("first");
//     ft_lstadd_back(&head, ft_lstnew("second"));
//     ft_lstadd_back(&head, ft_lstnew("third"));
//     int size = ft_lstsize(head);
//     printf("List size: %d\n", size); 
//     ft_lstclear(&head, free);
//     return 0;
// }