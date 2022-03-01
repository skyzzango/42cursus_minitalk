/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 23:35:48 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 23:35:49 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Find characters in a buffer.
** @param	src		Pointer to buffer.
** @param	c		Character to look for.
** @param	len		Number of characters to check.
** @return			A pointer to the first location of c in buffer.
** 					Otherwise it returns NULL.
*/

t_ptr	ft_memchr(const void *src, int c, size_t len)
{
	const t_uchar	*ps;

	ps = (const t_uchar *)src;
	while (len--)
		if (*ps++ == (t_uchar)c)
			return ((t_ptr)ps - 1);
	return (NULL);
}
