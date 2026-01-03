/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 02:39:54 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 02:39:54 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst1;
	t_list	*node;
	t_list	*ptr;
	void	*new;

	lst1 = NULL;
	node = NULL;
	ptr = lst;
	while (ptr)
	{
		new = f(ptr->content);
		node = ft_lstnew(new);
		if (!node)
		{
			ft_lstclear(&lst1, del);
			return (NULL);
		}
		ft_lstadd_back(&lst1, node);
		ptr = ptr->next;
	}
	return (lst1);
}
