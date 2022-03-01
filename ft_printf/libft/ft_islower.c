/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 00:19:50 by hookang           #+#    #+#             */
/*   Updated: 2021/07/11 00:19:51 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Determines whether an integer represents an alphabetic lower case character.
** @param	c	Integer to test.
** @return		A nonzero value if c is an alphabetic lower case.
** 				(a - z)
*/

t_bool	ft_islower(int c)
{
	return (ft_isbetween('a', 'z', c));
}
