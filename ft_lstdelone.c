/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 11:34:33 by haenneiy          #+#    #+#             */
/*   Updated: 2026/11/05 13:42:24 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}

// void	del(void *content)
// {
// 	free(content);
// }
// #include <stdio.h>
// int main ()
// {
// 	t_list *head;
// 	t_list *new;
// 	new = ft_lstnew(ft_strdup("hello"));
// 	head = new;
// 	new->next = NULL;
// 	printf("%s \n",(char *)head->content);
// 	ft_lstdelone(new,del);
// 	head = NULL;
// 	new = NULL;
// }