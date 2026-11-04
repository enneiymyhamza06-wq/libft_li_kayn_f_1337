/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haenneiy <haenneiy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 19:23:32 by haenneiy          #+#    #+#             */
/*   Updated: 2026/11/01 15:01:09 by haenneiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	count_words(char *s, char c)
// {
// 	int	i;
// 	int	count;
// 	int	word;

// 	i = 0;
// 	count = 0;
// 	word = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 			word = 0;
// 		else if (word == 0)
// 		{
// 			count++;
// 			word = 1;
// 		}
// 		i++;
// 	}
// 	return (count);
// }

#include "libft.h"

static int	num_word(char *s, char c)
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

int len_word(char *s,char c)
{
	char **arr;
	int j;
	int i;

	len_klma = 0;
	i = 0;
	while ((s[i] >= 9 && s[i] <= 13) && s[i])
	{
		i++;
		j++;
	}
	return len_klma;
}

char **ft_split(char const *s, char c)
{
	char **result;
	int i;
	int k;
	int j;
	result = malloc((char **)num_word(s) +1) * sizeof(char *);
	if (!result)
	return NULL;
	i = 0;
	while (s[i])
	{
		while ((s[i] >= 9 && s[i] <= 13) && s[i])
			i++;
		while ((!(s[i] >= 9 && s[i] <= 13) && s[i]))
			tab[j] = malloc(len_word(s) +1) * sizeof(char);
		
	}
	
}





