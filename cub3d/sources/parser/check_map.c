/* ************************************************************************** */
/*                                                                            */
/*   check_map.c                                          :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:24 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/10 13:07:42 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

int	check_map(t_map *map, char *s, char *s2)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (map->data[i])
	{
		j = 0;
		while (map->data[i][j])
		{
			if (!ft_strchr(s, map->data[i][j]))
				return (-1);
			if (ft_strchr(s2, map->data[i][j]))
				k++;
			j++;
		}
		i++;
	}
	if (1 != k)
		return (-1);
	i = 0;
	return (0);
}
