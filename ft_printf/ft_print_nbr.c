/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 02:05:41 by hookang           #+#    #+#             */
/*   Updated: 2022/01/21 14:06:20 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(unsigned long long p)
{
	char	*str;
	int		len;

	len = ft_prints("0x");
	if (p == 0)
		return (len + ft_prints("0"));
	str = ft_ultoa_base(p, 16);
	if (str)
	{
		len += ft_prints(str);
		free(str);
	}
	return (len);
}

int	ft_printd(int d)
{
	char	*str;
	int		len;

	len = 0;
	if (d == 0)
		return (ft_prints("0"));
	str = ft_ltoa_base (d, 10);
	if (str)
	{
		len += ft_prints (str);
		free (str);
	}
	return (len);
}

int	ft_printu(unsigned int u)
{
	char	*str;
	int		len;

	len = 0;
	if (u == 0)
		return (ft_prints("0"));
	str = ft_ultoa_base(u, 10);
	if (str)
	{
		len += ft_prints(str);
		free(str);
	}
	return (len);
}

int	ft_printx(unsigned int x, const char format)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	if (x == 0)
		return (ft_prints("0"));
	str = ft_ultoa_base(x, 16);
	if (str)
	{
		if (format == 'X')
		{
			i = 0;
			while (str[i])
			{
				if ('a' <= str[i] && str[i] <= 'z')
					str[i] -= ' ';
				i++;
			}
		}
		len = ft_prints(str);
		free(str);
	}
	return (len);
}
