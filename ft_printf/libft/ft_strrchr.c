/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 02:36:51 by hookang           #+#    #+#             */
/*   Updated: 2021/07/07 02:36:53 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Scans a string for the last occurrence of a character.
** @param	src		Null-terminated string to search.
** @param	c		Character to be located.
** @return			a pointer to the last occurrence of c in str,
** 					or NULL if c is not found.
*/

char	*ft_strrchr(const char *src, int c)
{
	char	*ptr;

	if (!c)
		return ((char *)src + ft_strlen(src));
	ptr = 0;
	while (*src)
		if (*src++ == c)
			ptr = (char *)src - 1;
	return (ptr);
}
