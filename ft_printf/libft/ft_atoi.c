/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:43:38 by hookang           #+#    #+#             */
/*   Updated: 2021/07/09 13:43:40 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convert a string to integer.
** @param	str		String to be converted.
** @return			Interpreting the input characters as a number.
*/

int	ft_atoi(const char *str)
{
	int			sign;
	t_uint		res;
	t_uint		max;

	sign = 1;
	res = 0;
	max = 2147483647;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	if (sign == -1)
		max++;
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str++ - '0');
		if (max < res)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
	}
	return (res * sign);
}
