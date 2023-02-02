/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:23:16 by mtorun            #+#    #+#             */
/*   Updated: 2022/07/02 02:23:19 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	for_player(t_vars *data, int i)
{
	mlx_put_image_to_window(data->mlx, data->win, data->character,
		data->x_pos, data->y_pos);
	data->index = i;
}

static int	create_xpm(t_vars *data, char *path, int i)
{
	data->indeximg = i;
	data->img[data->indeximg] = mlx_xpm_file_to_image(data->mlx, path,
			&data->x_pos, &data->y_pos);
	return (data->img[data->indeximg] == NULL);
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
}

void	take_image(t_vars *data)
{
	int	is_error;

	is_error = 0;
	data->img = (void **)malloc(sizeof(void *) * 9);
	is_error += create_xpm(data, PLAYER_D, 0);
	is_error += create_xpm(data, BACKGROUND, 1);
	is_error += create_xpm(data, WALL, 2);
	is_error += create_xpm(data, DOOR, 3);
	is_error += create_xpm(data, COLLECT, 4);
	is_error += create_xpm(data, PLAYER_R, 5);
	is_error += create_xpm(data, PLAYER_L, 6);
	is_error += create_xpm(data, PLAYER_U, 7);
	data->img[8] = 0;
	if (is_error > 0)
		ft_error(data, 1);
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
