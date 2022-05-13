/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:47:06 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/15 16:13:37 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) + 1;
	while (len--)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
	}
	return (NULL);
}
/*
int main (void)
{
	char	str[] = "Lorem Ipsum is simply dummy text";
	int		c = (int)'e';

	printf("Before:\nstr: %s\n",str);

	printf("After:\noutput: %s\n",ft_strrchr(str,c));
}
*/
