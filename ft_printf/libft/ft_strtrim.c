/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:48:37 by hookang           #+#    #+#             */
/*   Updated: 2021/09/08 21:48:39 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (s1 && set)
	{
		i = 0;
		while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
			i++;
		len = ft_strlen(&s1[i]);
		if (len)
			while (s1[i + len - 1] && ft_strchr(set, s1[i + len - 1]) != NULL)
				len--;
		str = ft_stralloc(len);
	}
	if ((!s1 || !set) || !str)
		return (NULL);
	ft_strlcpy(str, &s1[i], len + 1);
	return (str);
}
