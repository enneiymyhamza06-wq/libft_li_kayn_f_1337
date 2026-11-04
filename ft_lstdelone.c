/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 11:34:33 by haenneiy          #+#    #+#             */
/*   Updated: 2026/11/04 18:30:24 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del || !lst)
		return;
	(*del)(lst->content);
	free(lst);
}
#include <stdio.h>
int	main(void)
{
	t_list	*new;
	char	*f;

	f = ft_strdup("hello");
	if (!f)
		return (1);
	new = ft_lstnew(f);
	if (!new)
	{
		free(f);
		return (1);
	}
	
	// Print BEFORE deleting to verify the data is there
	printf("Before delete - Pointer: %p, Content: %s\n", (void*)new, (char*)new->content);

	// Safely delete the node and its content
	ft_lstdelone(new, free);
	
	// Set the pointer to NULL so you don't accidentally use it again
	new = NULL; 

	printf("Successfully deleted node.\n");
	return (0);
}
