/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 00:19:38 by hookang           #+#    #+#             */
/*   Updated: 2021/07/11 00:19:40 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Determines whether an integer represents an alphabetic upper case character.
** @param	c	Integer to test.
** @return		A nonzero value if c is an alphabetic upper case.
** 				(A - Z)
*/

t_bool	ft_isupper(int c)
{
	return (ft_isbetween('A', 'Z', c));
}
