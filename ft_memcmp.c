/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:52:08 by haenneiy          #+#    #+#             */
/*   Updated: 2026/10/18 12:42:15 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && ss1[i] == ss2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)ss1[i] - (unsigned char)ss2[i]);
}

// int main(void)
// {
//     char s1[] = "abc";
//     char s2[] = "abc";
//     char s3[] = "abd";
//     char s4[] = "xbc";

//     printf("Test 1: %d\n", ft_memcmp(s1, s2, 3));

// }