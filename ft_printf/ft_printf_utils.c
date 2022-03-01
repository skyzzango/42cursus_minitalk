/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 02:24:50 by hookang           #+#    #+#             */
/*   Updated: 2022/01/21 14:06:06 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ullen_base(unsigned long long nbr, int base)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		nbr /= base;
		len++;
	}
	return (len);
}

char	*ft_ultoa_base(unsigned long long nbr, int base)
{
	int		i;
	char	*res;

	i = ft_ullen_base(nbr, base);
	res = ft_stralloc(i);
	if (!res)
		return (NULL);
	res[i--] = '\0';
	while (nbr != 0)
	{
		if (nbr % base < 10)
			res[i--] = nbr % base + '0';
		else
			res[i--] = nbr % base - 10 + 'a';
		nbr /= base;
	}
	return (res);
}

int	ft_llen_base(long long nbr, int base)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr != 0)
	{
		nbr /= base;
		len++;
	}
	return (len);
}

char	*ft_ltoa_base(long long nbr, int base)
{
	int		i;
	char	*res;

	i = ft_llen_base(nbr, base);
	res = ft_stralloc(i);
	if (!res)
		return (NULL);
	res[i--] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
		res[0] = '-';
	}
	while (nbr != 0)
	{
		if (nbr % base < 10)
			res[i--] = nbr % base + '0';
		else
			res[i--] = nbr % base - 10 + 'a';
		nbr /= base;
	}
	return (res);
}
