/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:22:12 by haenneiy          #+#    #+#             */
/*   Updated: 2026/10/20 16:26:49 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t	i;
	size_t	l;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while ( i < n )
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
