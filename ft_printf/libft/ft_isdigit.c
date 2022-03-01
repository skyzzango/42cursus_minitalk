/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:05:12 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 14:05:14 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Determines whether an integer represents a decimal-digit character.
** @param	c	Integer to test.
** @return		A nonzero value if c is a decimal digit.
** 				(0 - 9)
*/

t_bool	ft_isdigit(int c)
{
	return (ft_isbetween('0', '9', c));
}
