/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:32:17 by mtorun            #+#    #+#             */
/*   Updated: 2022/07/02 02:32:20 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(char type, va_list *list)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += prnt_char(va_arg(*list, int));
	else if (type == 's')
		len += prnt_str(va_arg(*list, char *));
	else if (type == 'p')
	{
		len += write(1, "0x", 2);
		len += prnt_hexa(va_arg(*list, long long int), 1);
	}
	else if (type == 'x')
		len += prnt_hexa(va_arg(*list, unsigned), 1);
	else if (type == 'X')
		len += prnt_hexa(va_arg(*list, unsigned), 2);
	else if (type == 'i' || type == 'd')
		len += prnt_int(va_arg(*list, int));
	else if (type == 'u')
		len += prnt_uint(va_arg(*list, unsigned int));
	else if (type == '%')
		len += prnt_char('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		len;
	int		i;

	va_start(list, str);
	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			len += write(1, &str[i], 1);
		else if (str[i] == '%')
			len += ft_convert(str[++i], &list);
		i++;
	}
	va_end(list);
	return (len);
}
/*
#include <limits.h>
#include <stdio.h>

int main(void){
	ft_printf("%d", 155.113);
	printf("%.2f", 155.113);
}
*/
/*
int main(void)
{
    int Blen;
    int Alen;
     printf("char:%%c\n");
     Blen = ft_printf("B: char: %c\n", 'a');
     Alen = printf("A: char: %c\n", 'a');
     printf("B: %d\n", Blen);
     printf("A: %d\n", Alen);
     printf("-------------------------------------------\n");
     printf("string:%%s\n");
     Blen = ft_printf("B: string: %s%c\n", "ali Veli", 'a');
     Alen = printf("A: string: %s%c\n", "ali Veli", 'a');
     printf("B: %d\n", Blen);
     printf("A: %d\n", Alen);
     printf("-------------------------------------------\n");
     printf("pointer:%%p\n");
     Blen = ft_printf("B: pointer: %p\n", &Blen);
     Alen = printf("A: pointer: %p\n", &Blen);
     printf("B: %d\n", Blen);
     printf("A: %d\n", Alen);
     printf("-------------------------------------------\n");
     printf("hexB:%%X\n");
     Blen = ft_printf("B: hexB: %X\n", -656667);
     Alen = printf("A: hexB: %X\n", -656667);
     printf("B: %d\n", Blen);
     printf("A: %d\n", Alen);
     printf("-------------------------------------------\n");
     printf("hexK:%%x\n");
     Blen = ft_printf("B: hexK: %x\n", -979899);
     Alen = printf("A: hexK: %x\n", -979899);
     printf("B: %d\n", Blen);
     printf("A: %d\n", Alen);
     printf("-------------------------------------------\n");
     printf("int:%%i\n");
     Blen = ft_printf("B: %i\n", -0);
     Alen = printf("A: %i\n", -0);
     printf("B: %d\n", Blen);
     printf("A: %d\n", Alen);
     printf("-------------------------------------------\n");
     printf("int:%%d\n");
     Blen = ft_printf("B: %d\n", -9798990);
     Alen = printf("A: %d\n", -9798990);
     printf("B: %d\n", Blen);
     printf("A: %d\n", Alen);
     printf("-------------------------------------------\n");
     printf("unsigned int:%%u\n");
     Blen = ft_printf("B: %u\n", 9798990);
     Alen = printf("A: %u\n", 9798990);
     printf("B: %d\n", Blen);
     printf("A: %d\n", Alen);
     printf("-------------------------------------------\n");
     printf("%%:%%%%\n");
     Blen = ft_printf("B: %%232323%i\n", 9798990);
     Alen = printf("A: %%232323%i\n", 9798990);
     printf("B: %d\n", Blen);
     printf("A: %d\n", Alen);
     printf("-------------------------------------------\n");
     ft_printf("%x-\n", LONG_MAX);
     printf("%x-", LONG_MAX);
}
*/
