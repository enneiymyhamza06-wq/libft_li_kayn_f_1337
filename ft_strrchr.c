/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:24:52 by haenneiy          #+#    #+#             */
/*   Updated: 2026/10/17 17:04:33 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
	size_t  i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return NULL;
}

// #include <stddef.h>
// #include <stdio.h>

// int main ()
// {
//  char c = 'g';
// 	const char *l;
// 	const char *str = "hellogf";
// 	l = ft_strchr(str, c);
// 	printf("%p",l);
// }
