/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:00:40 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/15 16:59:09 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	end;
	size_t	s_len;
	char	*str;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	end = 0 ;
	if (start < s_len)
		end = s_len - start;
	if (end > len)
		end = len;
	str = (char *)malloc(sizeof(char) * (end + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, end + 1);
	return (str);
}
/*
int main(void)
{
	char	str[] = "Lorem Ipsum is simply dummy text";
	unsigned int	start = 6;
	size_t	len = 7;

	printf("ft_substr:\nBefore: %s\nAfter:  %s\n",str,ft_substr(str,start,len));
}
*/
