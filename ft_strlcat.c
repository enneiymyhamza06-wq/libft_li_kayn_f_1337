/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:02:08 by haenneiy          #+#    #+#             */
/*   Updated: 2026/10/15 17:21:24 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen (const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_dst = ft_strlen(dst);
	size_t len_src = ft_strlen(src);
	size_t	i;
	size_t	b;

	i = 0;
	b = 0;
	if (size == 0)
		return (len_dst + len_src);
	if (len_dst > size)
		return (len_dst + len_src);
	while (dst[i])
	{
		i++;
	}

	while (src[b] && b < size -1)
	{
		dst[i] = src[b];
		i++;
		b++;
	}

	dst[i] = '\0';
	return (len_dst + len_src);
}
