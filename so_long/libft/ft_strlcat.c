/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakcan <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:49:23 by aakcan            #+#    #+#             */
/*   Updated: 2022/01/22 16:57:59 by aakcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	i = ft_strlen(dst);
	while (*src && i + 1 < size)
	{
		dst[i] = *src++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
/*
#include <stdio.h>
int main(void){
	char a[] = "iremsal";
	char b[] = "turanyan";
	printf("%zu", ft_strlcat(a, b, 4));//size kadar deger alir ve b kadar yazdirir
}//sonuc 12 olur 8 b den 4 size dan*/
