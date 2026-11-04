/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:42:45 by haenneiy          #+#    #+#             */
/*   Updated: 2026/11/04 11:46:57 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	lastnode = ft_lstlast(*lst);
	lastnode->next = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *head;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *new;
// 	node1 = ft_lstnew("node1");
// 	node2 = ft_lstnew("node2");
// 	node3 = ft_lstnew("node3");
// 	new = ft_lstnew("new");
// 	head = NULL;
// 	head = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	node3->content = "hella";
// 	new->content = "kkkk";
// 	ft_lstadd_back(&head, new);
// 	t_list *gg = ft_lstlast(head->next);
// 	printf("%s", gg->content);
// }