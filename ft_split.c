/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 19:23:32 by haenneiy          #+#    #+#             */
/*   Updated: 2026/11/07 17:57:41 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ch7al_mn_klma(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		while (s[i] && (s[i] != c))
			i++;
		count++;
	}
	return count;
}

char **free_kolchi (char **res,size_t n)
{
	while (n > 0)
	{
		n--;
		free(res[n]);
	}
	free(res);
	return NULL;
}

char **stirngs_klmat (char **res ,char const *s , char c)
{
	size_t i;
	size_t len;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
		break;
	len = 0;
		while (s[len] && s[len] != c)
			len++;
		res[i] = ft_substr(s,0,len);
		if (!res[i])
			return (free_kolchi(res, i));
		i++;
		s = s + len;
	}
	res[i] = NULL;
	return (res);
}


char **ft_split(char const *s, char c)
{
	if (!*s)
	return NULL;
	char **result;
	result = malloc(sizeof(char *) *(ch7al_mn_klma(s, c) + 1));
	if (!result)
		return NULL;

	return (stirngs_klmat(result,s,c));
}

int main ()
{
	char *arr = "---- hello -- world ---- hamza -- o tahiyati  -";
	char **res = ft_split(arr,'-');
	int i = 0;
	while (res && res[i])
	{
		printf("%s\n",res[i]);
		free(res[i]);
		i++;
	}
	free(res);
}