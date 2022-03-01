/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:19:27 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 15:19:41 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets buffers to a zero character.
** @param	dst		Pointer to destination.
** @param	len		Number of characters.
** @return			None.
*/

void	ft_bzero(void *dst, size_t len)
{
	ft_memset(dst, 0, len);
}
