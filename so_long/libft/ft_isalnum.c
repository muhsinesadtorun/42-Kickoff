/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakcan <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:44:53 by aakcan            #+#    #+#             */
/*   Updated: 2022/01/21 12:04:15 by aakcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void){
	char x = 'a';
	char y = 'A';
	char z = '1';

	printf("%d\n", ft_isalnum(x));
	printf("%d\n", ft_isalnum(y));
	printf("%d", ft_isalnum(z));
}*/
