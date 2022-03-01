/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:18:45 by hookang           #+#    #+#             */
/*   Updated: 2021/07/06 12:18:55 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Determines whether an integer represents an alphabetic character.
** @param	c	Integer to test.
** @return		A nonzero value if c is an alphabetic.
** 				(a - z or A - Z)
*/

t_bool	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
