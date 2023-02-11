/* ************************************************************************** */
/*                                                                            */
/*   utils.c                                              :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:24 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/10 21:14:15 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

void	image_put_pixel(t_image *img, int x, int y, unsigned int color)
{
	if (x < 0 || x > img->width || y < 0 || y > img->height)
		return ;
	*((int *)(img->addr + (y * img->line_len) \
	+ (x * 4))) = color;
}

int	image_get_pixel(t_image *img, int x, int y)
{
	if (x < 0 || x > img->width || y < 0 || y > img->height)
		return (0);
	return (*((int *)(img->addr + (y * img->line_len) \
	+ (x * 4))));
}

int	float_approximately(float a, float b)
{
	return (a - b < 0.0001f && a - b > -0.0001f);
}

int	int_abs(int i)
{
	return (i * ((i > 0) * 2 - 1));
}

float	float_abs(float i)
{
	return (i * ((i > 0) * 2 - 1));
}
