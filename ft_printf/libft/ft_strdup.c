/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:35:29 by hookang           #+#    #+#             */
/*   Updated: 2021/07/09 13:35:32 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Duplicate strings.
** @param	src		source string.
** @return			a pointer to the storage location for the copied string.
** 					or NULL if storage cannot be allocated.
*/

char	*ft_strdup(const char *src)
{
	char	*ptr;

	ptr = ft_stralloc(ft_strlen(src));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, src, ft_strlen(src));
	return (ptr);
}
