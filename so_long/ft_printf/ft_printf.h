/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:32:32 by mtorun            #+#    #+#             */
/*   Updated: 2022/07/02 02:32:34 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_convert(char type, va_list *list);
int		ft_printf(const char *str, ...);
int		prnt_char(char str);
int		prnt_str(char *str);
int		prnt_hexa(unsigned long int nb, int s);
int		prnt_int(int nb);
int		prnt_uint(unsigned int nb);

#endif
