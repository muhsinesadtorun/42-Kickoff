/* ************************************************************************** */
/*                                                                            */
/*   cub3d.h                                              :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:08 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <math.h>

# include <../lib/minilibx/mlx.h>

# include <libft.h>
# include <ft_printf.h>
# include <get_next_line.h>
# include <macro.h>
# include <data_structure.h>
# include <init_data.h>
# include <render.h>
# include <clear_map.h>
# include <events.h>
# include <tools.h>
# include <parser.h>

void	init_image(t_data *data);
void	minimap_render(t_data *data);

#endif
