/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 18:56:17 by haenneiy          #+#    #+#             */
/*   Updated: 2026/11/03 20:52:58 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

// #include <stdio.h>

// int main ()
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list 	*node2;
// 	t_list	*node3;
// 	node1 = ft_lstnew(node1);
// 	node2 = ft_lstnew(node2);
// 	node3 = ft_lstnew(node3);
// 	head = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	unsigned int h = ft_lstsize(head);
// 	printf("%d",h);
// }
