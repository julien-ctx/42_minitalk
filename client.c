/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:23:54 by juliencauch       #+#    #+#             */
/*   Updated: 2021/12/03 20:01:38 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bit_sender(pid_t pid, char c)
{
	int	bit;

	bit = 7;
	while (bit != -1)
	{
		if (c & (1 << bit))
		{
			if (kill(pid, SIGUSR1) < 0)
			{
				ft_printf("Wrong PID, please try again\n");
				exit(1);
			}
		}
		else
		{
			if (kill(pid, SIGUSR2) < 0)
			{
				ft_printf("Wrong PID, please try again\n");
				exit(1);
			}
		}
		bit--;
		usleep(100);
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	pid;

	if (ac != 3 || !av[2])
	{
		ft_printf("Please use a correct format: ./client [PID] [Message]\n");
		return (1);
	}
	pid = ft_atoi(av[1]);
	i = 0;
	while ((char)av[2][i])
	{
		bit_sender(pid, (char)av[2][i]);
		i++;
	}
	bit_sender(pid, '\0');
	ft_printf("Message received by server\n");
	return (0);
}
