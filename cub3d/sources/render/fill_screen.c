/* ************************************************************************** */
/*                                                                            */
/*   fill_screen.c                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:24 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

void	fill_screen(t_data *data)
{
	int		x;
	int		y;
	int		middle;

	middle = data->screen.height / 2;
	y = -1;
	while (++y < middle)
	{
		x = -1;
		while (++x < data->screen.width)
			image_put_pixel(&data->screen, x, y, data->ceil_color);
	}
	while (++y < data->screen.height)
	{
		x = -1;
		while (++x < data->screen.width)
			image_put_pixel(&data->screen, x, y, data->floor_color);
	}
}
