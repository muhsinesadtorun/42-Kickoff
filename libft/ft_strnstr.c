/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:48:37 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/15 16:28:03 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (n[0] == '\0')
		return (&h[i]);
	while (h[i] && i < len)
	{
		while (h[i + j] == n[j] && i + j < len)
		{
			j++;
			if (n[j] == '\0')
				return (&h[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char h[] ="Lorem Ipsum is simply dummy text";
	char n[] = "is";

	size_t l = 16;

	printf("%s :: %s",strnstr(h,n,l),ft_strnstr(h,n,l));
}
*/
