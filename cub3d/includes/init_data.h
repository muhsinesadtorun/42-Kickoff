/* ************************************************************************** */
/*                                                                            */
/*   init_data.h                                          :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:08 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_DATA_H
# define INIT_DATA_H

# include <data_structure.h>

void	get_map(t_data *data, char **line);
void	get_args(t_data *data, t_map *map);
int		get_data(t_data *data, t_map *map);

#endif