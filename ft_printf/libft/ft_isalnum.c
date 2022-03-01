/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:05:26 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 14:05:27 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Determines whether an integer represents an alphanumeric character.
** @param	c	Integer to test.
** @return		A nonzero value if either isalpha or isdigit is nonzero for c.
** 				(a - z, A - Z, or 0 - 9)
*/

t_bool	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
