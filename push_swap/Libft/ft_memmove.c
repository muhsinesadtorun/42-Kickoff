/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:32:06 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:32:10 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst > src)
		i = len + 1;
	else
		i = -1;
	if (dst != src && len)
	{
		if (dst > src)
			while (--i)
				((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
		else
			while (++i < len)
				((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}
/*#include <stdio.h>
int	main()
{
	char	dst[] = "ilknur";
	char	src[] = "yarikan";

	ft_memmove(dst, src, 3);
	printf("%s\n", dst);
}*/
