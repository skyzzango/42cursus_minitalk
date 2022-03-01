/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 23:35:39 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 23:35:42 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Moves one buffer to another.
** @param	dst		Destination object.
** @param	src		Source object.
** @param	len		Number of bytes to copy.
** @return			The value of dst.
*/

t_ptr	ft_memmove(void *dst, const void *src, size_t len)
{
	t_uchar			*pd;
	const t_uchar	*ps;

	pd = (t_uchar *)dst;
	ps = (const t_uchar *)src;
	if (dst < src)
		while (len--)
			*pd++ = *ps++;
	else if (src != dst)
		while (len--)
			pd[len] = ps[len];
	return (dst);
}
