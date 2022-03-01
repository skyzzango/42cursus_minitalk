/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 02:35:05 by hookang           #+#    #+#             */
/*   Updated: 2021/07/07 02:35:45 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy characters of one string to another.
** @param	dst		New string.
** @param	src		String to copy from.
** @param	len		Number of characters to be copied.
** @return			The total length of the string they tried to create.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	slen;

	slen = ft_strlen(src);
	if (slen + 1 < len)
		ft_memcpy(dst, src, slen + 1);
	else if (len != 0)
	{
		ft_memcpy(dst, src, len - 1);
		dst[len - 1] = '\0';
	}
	return (slen);
}
