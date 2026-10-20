/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:33:27 by haenneiy          #+#    #+#             */
/*   Updated: 2026/10/20 11:09:54 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
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
