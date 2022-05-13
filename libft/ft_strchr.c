/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:32:42 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/15 16:17:59 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		++s;
	if (*s == (char) c)
		return ((char *)s);
	return (NULL);
}
/*
int main (void)
{
	char	str[] = "Lorem Ipsum is simply dummy text";
	int		c = (int)'e';
	
	printf("Before:\nstr: %s\n",str);

	printf("After:\noutput: %s\n",ft_strchr(str,c));
}
*/
