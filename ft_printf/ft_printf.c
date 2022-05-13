/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:56:57 by mtorun            #+#    #+#             */
/*   Updated: 2022/03/02 13:32:58 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list arg)
{
	int			p_count;

	p_count = 0;
	if (c == 'c')
		p_count += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		p_count += ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		p_count += ft_putbase(va_arg(arg, int), c, 10);
	else if (c == 'u')
		p_count += ft_putbase(va_arg(arg, unsigned int), c, 10);
	else if (c == 'x' || c == 'X')
		p_count += ft_putbase(va_arg(arg, unsigned int), c, 16);
	else if (c == 'p')
	{
		p_count += ft_putstr("0x");
		p_count += ft_putbase(va_arg(arg, unsigned long int), c, 16);
	}
	else if (c == '%')
		p_count += ft_putchar('%');
	return (p_count);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	int		p_count;
	va_list	arg;

	p_count = 0;
	count = 0;
	va_start(arg, str);
	while (str[count])
	{
		if (str[count] == '%')
		{
			p_count += ft_format(str[++count], arg);
			count++;
		}
		else
			p_count += ft_putchar(str[count++]);
	}
	return (p_count);
}
/*
int main (void)
{
	ft_printf("Ahmet %p %d %d\n", "126", 121, 122);
	printf("%p","126");
	return (0);
}
*/