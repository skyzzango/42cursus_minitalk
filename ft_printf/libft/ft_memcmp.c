/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:52:48 by hookang           #+#    #+#             */
/*   Updated: 2021/06/05 17:52:50 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares characters in two buffers.
** @param	s1		First buffer.
** @param	s2		Second buffer.
** @param	len		Number of bytes to compare.
** @return			Indicates the relationship between the buffers.
** 					[< 0] if s1 is less than s2,
** 					[0] if s1 is equal s2,
** 					[> 0] if s1 is greater than s2,
*/

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	const t_uchar	*ps1;
	const t_uchar	*ps2;

	ps1 = (const t_uchar *)s1;
	ps2 = (const t_uchar *)s2;
	while (len--)
		if (*ps1++ != *ps2++)
			return (ps1[-1] - ps2[-1]);
	return (0);
}
