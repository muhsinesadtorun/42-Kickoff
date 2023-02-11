/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:24 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/11 03:20:20 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

void	render(t_data *data)
{
	const float	view_angle = 1.0f;
	const float	add = view_angle / WIN_WIDTH;
	float		angle;
	int			pixels;

	ft_memset(data->mini_map.addr, '\0', ((data->x_size + 1) * 10 * \
		(data->y_size + 1) * 10) * 4);
	ft_memset(data->part_of_map.addr, '\0', 200 * 200 * 4);
	fill_screen(data);
	pixels = WIN_WIDTH;
	angle = -(view_angle / 2);
	while (pixels--)
	{
		raycast(data, angle, pixels);
		angle += add;
	}
	map_render(data); 
	mlx_put_image_to_window(data->mlx, data->mlx_win, \
	data->screen.img, 0, 0);
	 mlx_put_image_to_window(data->mlx, data->mlx_win, \
	data->part_of_map.img, 0, 0); 
}
