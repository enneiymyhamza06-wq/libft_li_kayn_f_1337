/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:02:08 by haenneiy          #+#    #+#             */
/*   Updated: 2026/10/27 21:04:48 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	size_t	l;
	size_t	w;

	len_dst = 0;
	len_src = 0;
	len_src = ft_strlen(src);
	i = 0;
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (size + len_src);
	len_dst = i;
	l = 0;
	w = (size - len_dst) - 1;
	while (l < w && src[l])
	{
		dst[i] = src[l];
		i++;
		l++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}

// int	main(void)
// {
// 	char dst[] = "hamza";
// 	const char src[] = "naady";
// 	size_t size = 10;
// 	size_t len = ft_strlcat(dst, src, size);
// 	printf("%d \n", len);
// 	printf("%s\n", dst);
// }