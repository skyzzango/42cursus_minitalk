/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 02:37:36 by hookang           #+#    #+#             */
/*   Updated: 2021/07/07 02:37:37 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares up to the specified count of characters of two strings.
** @param	s1		Strings to compare.
** @param	s2		Strings to compare.
** @param	len		Number of characters to compare.
** @return			Indicates the relation of the substrings of s1 and s2.
** 					[< 0] if s1 substring is less than s2 substring,
** 					[0] if s1 substring is equal s2 substring,
** 					[> 0] if s1 substring is greater than s2 substring,
*/

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	const t_uchar	*ps1;
	const t_uchar	*ps2;
	size_t			i;

	if (!len)
		return (0);
	ps1 = (t_uchar *)s1;
	ps2 = (t_uchar *)s2;
	i = 0;
	while (ps1[i] && ps2[i] && ps1[i] == ps2[i] && --len)
		i++;
	return (ps1[i] - ps2[i]);
}
