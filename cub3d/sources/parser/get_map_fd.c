/* ************************************************************************** */
/*                                                                            */
/*   get_map_fd.c                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:24 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

int	get_map_fd(t_map *map, int fd)
{
	char	*s;
	char	*tmp;

	tmp = ft_strdup("");
	s = NULL;
	while (!s)
		if (-1 == get_line(fd, &s, 0))
			return (-1);
	while (s)
	{
		tmp = join_and_free(tmp, s);
		get_line(fd, &s, 0);
	}
	while (!s)
		if (-1 == get_line(fd, &s, 0))
			break ;
	if (s)
	{
		free(s);
		free(tmp);
		return (-1);
	}
	map->data = ft_split(tmp, '\n');
	free(tmp);
	return (0);
}
