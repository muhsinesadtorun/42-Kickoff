/* ************************************************************************** */
/*                                                                            */
/*   parser.h                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:08 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

t_map	*create_map(char *filename);
t_map	*init_map(int fd);
int		get_map_fd(t_map *map, int fd);
int		get_param(t_map *map, int fd, char *s);
int		check_wall(t_map *map, char ch);
int		check_map(t_map *map, char *s, char *s2);
void	get_position(t_map *map);

#endif