/* ************************************************************************** */
/*                                                                            */
/*   get_position.c                                       :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:24 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

void	get_position(t_map *map)
{
	int		i;
	int		k;
	int		t;

	t = 0;
	i = -1;
	while (map->data[++i])
	{
		k = -1;
		while (map->data[i][++k])
		{
			if (ft_strchr("WESN", map->data[i][k]))
			{
				while (map->data[i][k] != "ENWS"[t])
					t++;
				map->ang = t * 90;
				map->data[i][k] = '0';
				map->y = i;
				map->x = k;
				return ;
			}
		}
	}
}
