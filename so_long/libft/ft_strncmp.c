/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakcan <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:54:30 by aakcan            #+#    #+#             */
/*   Updated: 2022/01/22 18:32:32 by aakcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s1 == *s2 && n-- - 1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
/*
#include <stdio.h>
int main( void )
{
    const char *cp1 = "abcdefh";
    const char *cp2 = "abcdefj";
    int ret;

    ret = ft_strncmp(cp1, cp2, 7);

    if(ret<0) printf("s1 karakter dizisi s2 karakter dizisinden küçüktür!");
    else if(ret>0) printf("s2 karakter dizisi s1 karakter dizisinden küçüktür!");
    else printf("s1 karakter dizisi s2 karakter dizisine eşittir!");

    return 0;
}*/
