/* ************************************************************************** */
/*                                                                            */
/*   raycast.c                                            :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:24 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

void	raycast(t_data *data, float angle, int pixels)
{
	float		cos_value;
	float		sin_value;
	t_player	dir;

	cos_value = cosf(angle + data->look);
	sin_value = sinf(angle + data->look);
	dir.x = (cos_value > 0) * 2 - 1;
	dir.y = (sin_value > 0) * 2 - 1;
	dir.angle = angle;
	look_slope(data, sin_value / cos_value, &dir, pixels);
}
