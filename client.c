/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:36:12 by hurabe            #+#    #+#             */
/*   Updated: 2024/08/24 21:05:08 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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

int	main(int argc, char **argv)
{
	return (0);
}
