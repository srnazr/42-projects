/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 02:45:47 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 02:45:47 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}

// int main(void)
// {
//     t_list *node = ft_lstnew("Hello, world!");
//     if (!node)
//     {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }
//     printf("Node content: %s\n", (char *)node->content);
//     printf("Node next: %p\n", (void *)node->next);
//     free(node);
//     return 0;
// }