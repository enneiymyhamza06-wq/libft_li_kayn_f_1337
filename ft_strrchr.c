/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:24:52 by haenneiy          #+#    #+#             */
/*   Updated: 2026/11/10 00:23:44 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	c = (unsigned char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if ((unsigned char)s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if ((unsigned char)s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
