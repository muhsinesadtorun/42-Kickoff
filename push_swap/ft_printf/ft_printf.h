/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:11:54 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/11 18:12:01 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_sayi_len(long sayi);
int	ft_putnbr(int nbr);
int	ft_format(char format, va_list argv);
int	ft_printf(const char *str, ...);
int	hex_base(unsigned long num, char x, int i);
#endif
