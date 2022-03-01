/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 02:37:18 by hookang           #+#    #+#             */
/*   Updated: 2021/07/07 02:37:19 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Finds a string in a string.
** @param	src		Null-terminated source string.
** @param	find	String to be located.
** @param	len		Number of characters to check.
** @return			A pointer to the first occurrence of find in str,
** 					or NULL if find is not found.
*/

char	*ft_strnstr(const char *src, const char *find, size_t len)
{
	const char	*end;
	size_t		c;

	if (!*find)
		return ((char *)src);
	end = src + len;
	while (*src && len--)
	{
		c = 0;
		while (find[c] && src + c < end && src[c] == find[c])
			if (!find[++c])
				return ((char *) src);
		src++;
	}
	return (NULL);
}
