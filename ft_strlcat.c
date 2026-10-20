/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:02:08 by haenneiy          #+#    #+#             */
/*   Updated: 2026/10/20 11:12:36 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	b;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
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
	while (src[b] && b < size - 1)
	{
		dst[i] = src[b];
		i++;
		b++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}
