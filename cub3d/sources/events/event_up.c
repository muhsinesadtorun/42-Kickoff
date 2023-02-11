/* ************************************************************************** */
/*                                                                            */
/*   event_up.c                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:24 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

int	event_up(int key, t_data *data)
{
	if (key == 13)
		data->keys.w = 1;
	else if (key == 1)
		data->keys.s = 1;
	else if (key == 0)
		data->keys.a = 1;
	else if (key == 2)
		data->keys.d = 1;
	else if (key == 123)
		data->keys.left = 1;
	else if (key == 124)
		data->keys.right = 1;
	else if (key == 53)
		exit(0);
	return (0);
}
