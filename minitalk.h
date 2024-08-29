/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:36:18 by hurabe            #+#    #+#             */
/*   Updated: 2024/08/28 21:33:56 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "signal.h"
# include "ft_printf/ft_printf.h"

typedef struct s_global
{
	volatile int	client_pid;
	volatile int	bit_position;
	volatile int	current_char;
}	t_global;

# define INPUT_ERROR 1
# define PID_ERROR 2
# define KILL_ERROR 3
# define RESPONSE_ERROR 4

#endif