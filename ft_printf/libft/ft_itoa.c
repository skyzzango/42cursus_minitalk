/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:49:02 by hookang           #+#    #+#             */
/*   Updated: 2021/09/08 21:49:03 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nbr)
{
	char	*res;
	t_uint	n;
	size_t	i;

	i = ft_nbrlen(nbr);
	res = ft_stralloc(i);
	if (!res)
		return (NULL);
	res[i--] = '\0';
	if (0 <= nbr)
		n = nbr;
	else
	{
		n = nbr * -1;
		res[0] = '-';
	}
	while (10 <= n)
	{
		res[i--] = (n % 10) + '0';
		n /= 10;
	}
	res[i] = n + '0';
	return (res);
}
