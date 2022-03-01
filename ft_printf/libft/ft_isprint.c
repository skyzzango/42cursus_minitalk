/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:05:46 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 14:05:47 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Determines whether an integer represents a printable character.
** @param	c	Integer to test.
** @return		A nonzero value if c is a printable character.
** 				(0x20 - 0x7E)
*/

t_bool	ft_isprint(int c)
{
	return (ft_isbetween(' ', '~', c));
}
