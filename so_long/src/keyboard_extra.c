/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard_extra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:22:30 by mtorun            #+#    #+#             */
/*   Updated: 2022/07/02 02:22:31 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

void	ft_exit(t_vars *data)
{
	if (data != NULL)
	{
		if (data->buffer)
			free(data->buffer);
		m_free(data);
		if (data->win)
			mlx_destroy_window(data->mlx, data->win);
		free(data);
	}
	exit (0);
}

void	m_free(t_vars *data)
{
	int	i;

	i = data->map_height;
	if (data->map != NULL)
	{
		while (i >= 0)
		{
			if (data->map[i])
				free(data->map[i]);
			i--;
		}
		free(data->map);
		i = 0;
		if (data->img != NULL)
		{
			while (i < 8)
			{
				if (data->img[i])
					mlx_destroy_image(data->mlx, data->img[i]);
					i++;
			}
			free(data->img);
		}
	}
}

int	is_x(t_vars *data)
{
	ft_exit(data);
	return (0);
}

void	is_collect(t_vars *data, char c)
{
	if (c == 'C')
	{
		if (data->c_total > 0)
			data->c_total--;
	}
	else if (c == 'E' && data->c_total == 0)
		ft_exit(data);
}

void	is_exit(t_vars *data)
{
	if (data->c_total != 0)
		return ;
	ft_printmove(++data->p_count);
	ft_exit(data);
}
