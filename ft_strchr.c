/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:33:27 by haenneiy          #+#    #+#             */
/*   Updated: 2026/11/08 03:59:22 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == 0)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		else if (s[i] == '\0' && c == '\0')
		{
			return ((char *)s);
		}
		i++;
	}
	return (NULL);
}
