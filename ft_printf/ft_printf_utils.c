/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:06:55 by mtorun            #+#    #+#             */
/*   Updated: 2022/03/02 12:11:22 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	p_count;

	p_count = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[p_count])
		write(1, str + p_count++, 1);
	return (p_count);
}

int	ft_putbase(long double n, char c, int b)
{
	int		p_count;
	char	*base;

	p_count = 0;
	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
		p_count = 1;
	}
	if (n >= b)
		p_count += ft_putbase(n / b, c, b);
	p_count += write(1, &base[(unsigned long)n % b], 1);
	return (p_count);
}
