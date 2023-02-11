/* ************************************************************************** */
/*                                                                            */
/*   events.h                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:08 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVENTS_H
# define EVENTS_H

int		event_up(int key, t_data *data);
int		event_down(int key, t_data *data);
int		update(t_data *data);
void	move(t_data *data, t_vector2f move);
void	event_handler(t_data *data);

#endif