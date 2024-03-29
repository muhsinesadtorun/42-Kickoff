/* ************************************************************************** */
/*                                                                            */
/*   data_structure.h                                     :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:08 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_STRUCTURE_H
# define DATA_STRUCTURE_H

typedef struct s_image
{
	int		width;
	int		height;
	void	*img;
	char	*addr;
	int		bbp;
	int		line_len;
	int		endian;
}	t_image;

typedef struct s_found
{
	float	distance;
	float	rate;
	float	x;
	float	y;
}	t_found;

typedef struct s_player
{
	int		x;
	int		y;
	float	angle;
}	t_player;

typedef struct s_vector2f
{
	float	x;
	float	y;
}	t_vector2f;

typedef struct s_keys
{
	int	w;
	int	s;
	int	a;
	int	d;
	int	right;
	int	left;
}	t_keys;

typedef struct s_pixel
{
	int	o;
	int	r;
	int	g;
	int	b;
	int	f;
}	t_pixel;

typedef struct s_map
{
	char	**data;
	char	*no;
	char	*so;
	char	*ea;
	char	*we;
	int		x;
	int		y;
	float	ang;
	t_pixel	f;
	t_pixel	c;
}	t_map;

typedef struct s_data
{
	void		*mlx;
	void		*mlx_win;
	t_image		screen;
	t_image		mini_map;
	t_image		part_of_map;
	int			**map;
	int			y_size;
	int			x_size;
	int			floor_color;
	int			ceil_color;
	t_image		imgs[4];
	t_vector2f	pos;
	float		look;
	int			active_img;
	t_keys		keys;
	t_map		*map_in_data;
}	t_data;

#endif
