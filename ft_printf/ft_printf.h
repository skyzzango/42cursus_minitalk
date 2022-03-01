/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:31:15 by hookang           #+#    #+#             */
/*   Updated: 2022/01/21 14:14:10 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);

int		ft_printc(int c);
int		ft_prints(char *s);
int		ft_printp(unsigned long long p);
int		ft_printd(int n);
int		ft_printu(unsigned int n);
int		ft_printx(unsigned int n, const char format);

int		ft_llen_base(long long nbr, int base);
int		ft_ullen_base(unsigned long long nbr, int base);
char	*ft_ltoa_base(long long nbr, int base);
char	*ft_ultoa_base(unsigned long long nbr, int base);

#endif
