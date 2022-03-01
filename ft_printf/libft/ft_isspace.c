/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:18:44 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 14:18:45 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Determines whether an integer represents a space character.
** @param	c	Integer to test.
** @return		A nonzero value if c is a white-space character.
** 				(0x20 or 0x09 - 0x0D)
*/

t_bool	ft_isspace(int c)
{
	return (c == ' ' || ft_isbetween(9, 13, c));
}
