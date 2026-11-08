/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 19:56:42 by haenneiy          #+#    #+#             */
/*   Updated: 2026/11/04 10:39:00 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*gg;

	if (!lst)
		return (NULL);
	gg = lst;
	while (gg->next)
		gg = gg->next;
	return (gg);
}
// #include <stdio.h>

// int main ()
// {
// 	t_list *head;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	node1 = ft_lstnew("node1");
// 	node2 = ft_lstnew("node2");
// 	node3 = ft_lstnew("node3");
// 	head = NULL;
// 	head = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	node3->content = "hella";
// 	t_list *p;
// 	p = ft_lstnew("p");
// 	p = ft_lstlast(head);
// 	printf("%s \n",p->content);
// }
