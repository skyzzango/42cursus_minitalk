/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:00:04 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 15:00:05 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convert character to lowercase.
** @param	c	Character to convert.
** @return		Convert copy of c to lower case, if possible, and returns.
*/

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + ' ');
	return (c);
}
