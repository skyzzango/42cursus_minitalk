/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:48:54 by hookang           #+#    #+#             */
/*   Updated: 2021/09/08 21:48:55 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	t_uint	i;
	t_uint	j;
	char	**words;

	if (s)
		words = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!s || !words)
		return (NULL);
	j = 0;
	while (*s != '\0')
	{
		i = 0;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > 0)
		{
			words[j] = ft_stralloc(i);
			ft_strlcpy(words[j++], s, i + 1);
			s = &s[i];
		}
		else
			s++;
	}
	words[j] = NULL;
	return (words);
}
