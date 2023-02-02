/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 01:15:14 by mtorun            #+#    #+#             */
/*   Updated: 2022/07/02 02:28:27 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/so_long.h"

int	main(int argc, char **argv)
{
	t_vars	*data;

	if (argc == 2)
	{
		if (!ft_checkfile(argv[1]))
			ft_error(NULL, 1);
		data = ft_calloc(sizeof(t_vars), 1);
		data->c_total = 0;
		data->p_count = 0;
		data->mlx = mlx_init();
		read_map(data, argv[1]);
		check_map(data);
		data->win = mlx_new_window(data->mlx, data->map_width * 64,
				data->map_height * 64, "So Long");
		take_image(data);
		data->character = data->img[0];
		put_image_background(data);
		put_image(data);
		mlx_hook(data->win, 2, 1L << 0, keyboard, data);
		mlx_hook(data->win, 17, 1L << 17, is_x, data);
		mlx_loop(data->mlx);
	}
	else
		ft_printf("Error\n");
	return (0);
}

int	ft_checkfile(char *str)
{
	int	len;

	len = ft_strlen(str);
	if (!ft_strncmp(str + (len - 4), ".ber", 4))
		return (1);
	return (0);
}
