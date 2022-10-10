/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:01:18 by juliencauch       #+#    #+#             */
/*   Updated: 2021/12/03 19:27:40 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	*ft_add_memory(char *str)
{
	char	*new;
	int		len;
	int		i;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	i = 0;
	new = (char *)ft_calloc((len + 2), sizeof(char));
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	free(str);
	return (new);
}

void	end_string_handler(char *string, int *boolean, int *i)
{
	ft_printf("%s", string);
	free(string);
	string = NULL;
	(*boolean) = 1;
	(*i) = 0;
}

void	sig_handler(int signal)
{
	static char	*string = NULL;
	static int	bit = 7;
	static int	i = 0;
	static int	boolean = 1;

	if (boolean)
		string = (char *)ft_calloc(2, sizeof(char) + (boolean = 0));
	if (signal == SIGUSR1)
		string[i] = string[i] | (1 << bit);
	if (signal == SIGUSR2)
		string[i] = string[i] & ~(1 << bit);
	bit--;
	if (bit == -1)
	{
		bit = 7;
		if (string[i] == '\0')
			end_string_handler(string, &boolean, &i);
		else
		{
			string = ft_add_memory(string);
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	int	pid;

	(void)av;
	if (ac != 1)
	{
		ft_printf("Please use the correct format: ./server\n");
		return (1);
	}
	pid = getpid();
	if (pid < 0)
	{
		ft_printf("PID error\n");
		return (1);
	}
	ft_printf("PID : %d\n", pid);
	if (signal(SIGUSR1, sig_handler) == SIG_ERR)
		ft_printf("Signal Error\n");
	if (signal(SIGUSR2, sig_handler) == SIG_ERR)
		ft_printf("Signal Error\n");
	while (1)
		pause();
}
