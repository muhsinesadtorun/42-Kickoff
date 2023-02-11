/* ************************************************************************** */
/*                                                                            */
/*   move.c                                               :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:24 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

static int	collision_detect(t_data *data, t_vector2f pos)
{
	float	size;

	size = 0.2f;
	return (data->map[(int)(pos.y + size)][(int)(pos.x + size)] != '1'
		&& data->map[(int)(pos.y - size)][(int)(pos.x + size)] != '1'
		&& data->map[(int)(pos.y - size)][(int)(pos.x - size)] != '1'
		&& data->map[(int)(pos.y + size)][(int)(pos.x - size)] != '1');
}

void	move(t_data *data, t_vector2f move)
{
	if (collision_detect(data,
			(t_vector2f){data->pos.x + move.x, data->pos.y}))
		data->pos.x += move.x;
	if (collision_detect(data,
			(t_vector2f){data->pos.x, data->pos.y + move.y}))
		data->pos.y += move.y;
}
