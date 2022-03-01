/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 02:36:15 by hookang           #+#    #+#             */
/*   Updated: 2021/07/07 02:36:18 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Appends characters of a string.
** @param	dst		Destination string.
** @param	src		Source string.
** @param	len		Number of characters to append.
** @return			The total length of the string they tried to create.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	char		*pd;
	const char	*ps;
	size_t		n;
	size_t		dlen;

	pd = dst;
	ps = src;
	n = len;
	while (n-- != 0 && *pd != '\0')
		pd++;
	dlen = pd - dst;
	n = len - dlen;
	if (n == 0)
		return (dlen + ft_strlen(ps));
	while (*ps != '\0')
	{
		if (n != 1)
		{
			*pd++ = *ps;
			n--;
		}
		ps++;
	}
	*pd = '\0';
	return (dlen + (ps - src));
}
