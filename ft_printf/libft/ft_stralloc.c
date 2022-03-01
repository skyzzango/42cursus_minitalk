/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 01:00:05 by hookang           #+#    #+#             */
/*   Updated: 2021/09/09 01:00:07 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates an array in memory with elements initialized to '\0'.
** @param	size	Length of allocate.
** @return			a pointer to the allocated space.
*/

char	*ft_stralloc(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * ++size);
	if (!str)
		return (NULL);
	ft_memset(str, '\0', size);
	return (str);
}
