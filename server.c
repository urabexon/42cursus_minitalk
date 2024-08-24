/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:36:20 by hurabe            #+#    #+#             */
/*   Updated: 2024/08/24 20:57:43 by hurabe           ###   ########.fr       */
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
		ft_printf("kell command error");
	exit(EXIT_FAILURE);
}

int	main(void)
{
	return (0);
}
