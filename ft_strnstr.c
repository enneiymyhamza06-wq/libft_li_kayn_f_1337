/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:14:29 by haenneiy          #+#    #+#             */
/*   Updated: 2026/10/27 14:48:19 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	z;
	size_t	o;

	i = 0;
	if (little[0] == '\0')
		return ((char *)(big));
	while (i < len && big[i])
	{
		z = i;
		o = 0;
		while (z < len && big[z] == little[o] && little[o] != '\0')
		{
			z++;
			o++;
		}
		if (little[o] == '\0')
			return ((char *)(&big[i]));
		i++;
	}
	return (NULL);
}
