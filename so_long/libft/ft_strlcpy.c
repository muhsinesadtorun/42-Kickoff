/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakcan <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:03:55 by aakcan            #+#    #+#             */
/*   Updated: 2022/01/22 16:33:57 by aakcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen(src);
	if (!src || !dst)
		return (0);
	if (dstsize)
	{
		while (*src && --dstsize)
			*dst++ = *src++;
		*dst = 0;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void){
	char a[] = "ahmetakcan";
	char b[] = "emregunar";
	printf("%s", a, b, 4); //return değerim i oldugu icin uzunlugun sayisini verir
}*/
