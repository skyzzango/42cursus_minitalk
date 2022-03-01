/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:30:35 by hookang           #+#    #+#             */
/*   Updated: 2022/03/01 19:30:38 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int msg)
{
	static int	i = 0;
	static char	c = 0;

	if (msg == SIGUSR1)
		c += 1 << i;
	if (++i == 8)
	{
		if (c)
			ft_printf("%c", c);
		else
			ft_printf("\n");
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	ft_printf("Server PID: %u\n", getpid());
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
		pause();
	return (0);
}
