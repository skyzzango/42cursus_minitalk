/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:59:55 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 14:59:56 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convert character to uppercase.
** @param	c	Character to convert.
** @return		Convert copy of c to upper case, if possible, and returns.
*/

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - ' ');
	return (c);
}
