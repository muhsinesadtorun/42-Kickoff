/* ************************************************************************** */
/*                                                                            */
/*   ft_printf.h                                          :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:20 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(int fd, char c, int *ret_val);
void	ft_putstr(int fd, char *str, int *ret_val);
size_t	ft_strlen(const char *str);
void	ft_convert(int fd, size_t num, char *repres, int *ret_val);
int		ft_printf(const char *str, ...);
void	ft_abs(int fd, int data, int *ret_val);

#endif