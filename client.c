/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:36:12 by hurabe            #+#    #+#             */
/*   Updated: 2024/08/25 20:59:32 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/// @brief 
volatile sig_atomic_t	g_check = false;

void	ft_error(int error)
{
	if (error == INPUT_ERROR)
		ft_printf("'./client [PID] [string]'");
	if (error == PID_ERROR)
		ft_printf("PID is wrong, Please check again PID!");
	if (error == KILL_ERROR)
		ft_printf("kill command error");
	exit(EXIT_FAILURE);
}

void	handle_check(int sig)
{
	if (sig == SIGUSR1)
	{
		g_check = true;
	}
}

void	send_signal(int	s_pid, char c)
{
	
}

int	check_pid(char	*c_pid)
{
	
}

int	main(int argc, char **argv)
{
	size_t i;
	size_t len;
	int	i_pid;

	if (argc != 3)
		ft_error(INPUT_ERROR);
	i_pid = check_pid(argv[1]);
	len = ft_strlen(argv[2]);
	signal(SIGUSR1, handle_check);
	i = 0;
	while (i <= len)
	{
		send_signal(i_pid, argv[2][i]);
		i++;
	}
	return (0);
}
