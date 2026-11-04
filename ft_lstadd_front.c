/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:30:13 by haenneiy          #+#    #+#             */
/*   Updated: 2026/11/03 18:52:51 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int main ()
// {
// 	t_list *head;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *new;
// 	new = malloc (sizeof(t_list));
// 	node1 = malloc (sizeof(t_list));
// 	node2 = malloc (sizeof(t_list));
// 	node3 = malloc (sizeof(t_list));
// 	head = NULL;
// 	head = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	new->content = "hello";
// 	node1->content = "hammza";
// 	ft_lstadd_front(&head, new);
// 	printf("%s\n",(char *)head->content);
// }
