/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 02:36:27 by hookang           #+#    #+#             */
/*   Updated: 2021/07/07 02:36:28 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Finds a character in a string.
** @param	src		Null-terminated source string.
** @param	c		Character to be located.
** @return			A pointer to the first occurrence of c in str,
** 					or NULL if c is not found.
*/

char	*ft_strchr(const char *src, int c)
{
	if (!c)
		return ((char *)src + ft_strlen(src));
	while (*src)
		if (*src++ == c)
			return ((char *)src - 1);
	return (NULL);
}
