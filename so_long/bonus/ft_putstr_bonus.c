/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:24:17 by mtorun            #+#    #+#             */
/*   Updated: 2022/07/02 02:24:21 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_putstr(t_vars *data)
{
	mlx_string_put(data->mlx, data->win, 16, 32, 0xffffff,
		"Total player move : ");
	data->m_player = ft_itoa(data->p_count);
	mlx_string_put(data->mlx, data->win, 156, 32, 0xffffff, data->m_player);
	free(data->m_player);
}
