/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:33:31 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:33:32 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	len;

	srclen = ft_strlen(src);
	if (dstsize)
	{
		if (srclen >= dstsize)
			len = dstsize - 1;
		else
			len = srclen;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (srclen);
}
/*#include <stdio.h>
int	main()
{
	char	dst[] = "ilknur";
	char	src[] = "yarikan";
	char	dst2[] = "carsamba";
	char	src2[] = "sali";

	printf("%zu\n", ft_strlcpy(dst, src, 2));
	printf("%zu\n", ft_strlcpy(dst2, src2, 2));	
}*/
