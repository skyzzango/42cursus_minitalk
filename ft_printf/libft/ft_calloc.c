/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:38:22 by hookang           #+#    #+#             */
/*   Updated: 2021/07/09 13:38:23 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates an array in memory with elements initialized to 0.
** @param	count	Number of elements.
** @param	size	Length in bytes of each element.
** @return			A pointer to the allocated space.
*/

t_ptr	ft_calloc(size_t count, size_t size)
{
	t_ptr	ptr;

	ptr = (t_ptr)malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
