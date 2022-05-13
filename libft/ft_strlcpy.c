/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:29:46 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/15 16:06:48 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	if (!dstsize)
		return (srcsize);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != 0 && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (srcsize);
}
/*
int	main(void)
{
	char	dest[] = "Lorem Ipsum is simply dummy text";

	char	src[] = "It is a long established fact that a reader";
	
	printf("Before:\ndest: %s\n src: %s\n",dest,src);

	printf("output: %zu\n",ft_strlcpy(dest,src,6));

	printf("After:\ndest: %s\n src: %s\n",dest,src);

	return (0);
}
*/
