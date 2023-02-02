/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:24:41 by mtorun            #+#    #+#             */
/*   Updated: 2022/07/02 02:24:43 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	for_player(t_vars *data, int i)
{
	mlx_put_image_to_window(data->mlx, data->win, data->character,
		data->x_pos, data->y_pos);
	data->index = i;
}

static void	create_xpm(t_vars *data, char *path, int i)
{
	data->indeximg = i;
	data->img[data->indeximg] = mlx_xpm_file_to_image(data->mlx, path,
			&data->x_pos, &data->y_pos);
}

void	put_image(t_vars *data)
{
	data->indexmap = -1;
	while (data->buffer[++data->indexmap])
	{
		if (data->buffer[data->indexmap] == '1')
			mlx_put_image_to_window(data->mlx, data->win, data->img[2],
				data->x_pos, data->y_pos);
		if (data->buffer[data->indexmap] == '0')
			mlx_put_image_to_window(data->mlx, data->win, data->img[1],
				data->x_pos, data->y_pos);
		if (data->buffer[data->indexmap] == 'E')
			mlx_put_image_to_window(data->mlx, data->win, data->img[3],
				data->x_pos, data->y_pos);
		if (data->buffer[data->indexmap] == 'C')
			mlx_put_image_to_window(data->mlx, data->win, data->img[4],
				data->x_pos, data->y_pos);
		if (data->buffer[data->indexmap] == 'P')
			for_player(data, data->indexmap);
		data->x_pos += 64;
		if (data->buffer[data->indexmap] == '\n')
		{
			data->x_pos = 0;
			data->y_pos += 64;
		}
	}
	ft_putstr(data);
}

void	take_image(t_vars *data)
{
	data->img = (void **)malloc(sizeof(void *) * 9);
	create_xpm(data, PLAYER_D, 0);
	create_xpm(data, BACKGROUND, 1);
	create_xpm(data, WALL, 2);
	create_xpm(data, DOOR, 3);
	create_xpm(data, COLLECT, 4);
	create_xpm(data, PLAYER_R, 5);
	create_xpm(data, PLAYER_L, 6);
	create_xpm(data, PLAYER_U, 7);
	data->img[8] = 0;
}

void	put_image_background(t_vars *data)
{
	int	i;

	i = 0;
	data->x_pos = 0;
	data->y_pos = 0;
	while (data->buffer[i])
	{
		mlx_put_image_to_window(data->mlx, data->win, data->img[1],
			data->x_pos, data->y_pos);
		data->x_pos += 64;
		if (data->buffer[i] == '\n')
		{
			data->x_pos = 0;
			data->y_pos += 64;
		}
		i++;
	}
	data->x_pos = 0;
	data->y_pos = 0;
}
