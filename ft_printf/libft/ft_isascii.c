/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:05:36 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 14:05:37 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Determines whether a particular character is an ASCII character.
** @param	c	Integer to test.
** @return		A nonzero value if c is an ASCII character.
** 				(0x00 - 0x7F)
*/

t_bool	ft_isascii(int c)
{
	return (ft_isbetween(0, 127, c));
}
