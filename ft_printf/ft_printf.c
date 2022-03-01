/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:48:30 by hookang           #+#    #+#             */
/*   Updated: 2022/01/21 14:14:18 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printc(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_prints(char *s)
{
	int	len;

	len = 0;
	if (!s)
		s = "(null)";
	while (*s)
		len += ft_printc(*s++);
	return (len);
}

int	ft_formats(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printc(va_arg(args, int));
	else if (format == 's')
		len += ft_prints(va_arg(args, char *));
	else if (format == 'p')
		len += ft_printp(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		len += ft_printd(va_arg(args, int));
	else if (format == 'u')
		len += ft_printu(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_printx(va_arg(args, unsigned int), format);
	else if (format == '%')
		len += ft_printc('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
			len += ft_formats(args, *++str);
		else
			len += ft_printc(*str);
		str++;
	}
	va_end(args);
	return (len);
}
