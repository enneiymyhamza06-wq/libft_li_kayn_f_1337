/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:33:27 by haenneiy          #+#    #+#             */
/*   Updated: 2026/11/10 19:46:56 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	ce;

	i = 0;
	ce = (char)c;
	while (s[i])
	{
		if (s[i] == ce)
			return ((char *)&s[i]);
		i++;
	}
	if (ce == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
