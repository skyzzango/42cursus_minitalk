/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:24:26 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 15:24:28 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies bytes between buffers.
** @param	dst		New buffer.
** @param	src		Buffer to copy from.
** @param	len		Number of characters to copy.
** @return			The value of dst.
*/

t_ptr	ft_memcpy(void *dst, const void *src, size_t len)
{
	t_uchar			*pd;
	const t_uchar	*ps;

	if (!len || dst == src)
		return (dst);
	pd = (t_uchar *)dst;
	ps = (const t_uchar *)src;
	while (len--)
		*pd++ = *ps++;
	return (dst);
}
