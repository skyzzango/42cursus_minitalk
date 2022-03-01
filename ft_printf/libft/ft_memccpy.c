/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:24:35 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 15:24:36 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies bytes between buffers.
** @param	dst		Pointer to the destination.
** @param	src		Pointer to the source.
** @param	c		Last character to copy.
** @param	len		Number of characters.
** @return			A pointer to the char in dst that immediately follows the character.
*/

t_ptr	ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	t_uchar			*pd;
	const t_uchar	*ps;

	pd = (t_uchar *)dst;
	ps = (const t_uchar *)src;
	while (len--)
	{
		*pd++ = *ps++;
		if (pd[-1] == (t_uchar)c)
			return (pd);
	}
	return (NULL);
}
