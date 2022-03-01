/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:23:44 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 15:23:47 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets buffers to a specified character.
** @param	dst		Pointer to destination.
** @param	c		Character to set.
** @param	len		Number of characters.
** @return			The value of dst.
*/

t_ptr	ft_memset(void *dst, int c, size_t len)
{
	t_uchar		*pd;

	pd = (t_uchar *)dst;
	while (len--)
		*pd++ = (t_uchar)c;
	return (dst);
}
