/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:35:00 by hookang           #+#    #+#             */
/*   Updated: 2021/09/08 21:35:02 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, t_uint start, size_t len)
{
	char	*new;

	if (str)
	{
		if (ft_strlen(str) < start)
			return ((char *)ft_calloc(start * sizeof(char), len));
		new = ft_stralloc(len);
	}
	if (!str || !new)
		return (NULL);
	ft_strlcpy(new, str + start, len + 1);
	return (new);
}
