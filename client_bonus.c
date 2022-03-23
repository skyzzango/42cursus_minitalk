/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:44:21 by hookang           #+#    #+#             */
/*   Updated: 2022/03/22 18:44:23 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	error_syntax(void)
{
	ft_printf("use: ./client [PID] [MSG]\n");
	exit(EXIT_FAILURE);
}

void	send_char(int pid, char c)
{
	int	i;

	i = 8;
	while (i--)
	{
		if (c & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c = c >> 1;
		usleep(500);
	}
}

void	send_str(int pid, char *str)
{
	while (*str)
	{
		send_char(pid, *str);
		str++;
	}
	send_char(pid, *str);
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_str_isdigit(argv[1]))
		error_syntax();
	send_str(ft_atoi(argv[1]), argv[2]);
	return (0);
}
