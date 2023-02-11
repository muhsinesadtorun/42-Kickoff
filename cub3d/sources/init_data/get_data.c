/* ************************************************************************** */
/*                                                                            */
/*   get_data.c                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:24 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

int	get_data(t_data *data, t_map *map)
{
	if (!data || !map)
		return (1);
	get_args(data, map);
	get_map(data, map->data);
	return (0);
}
