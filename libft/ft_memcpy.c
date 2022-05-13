/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:11:50 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/15 16:08:03 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL && n)
		return (dst);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dest[] = "Lorem Ipsum is simply dummy text";

	char	src[] = "It is a long established fact that a reader";
	
	printf("Before:\ndest: %s\n src: %s\n",dest,src);

	ft_memcpy(dest,src,8);

	printf("After:\ndest: %s\n src: %s\n",dest,src);

	return (0);

}
*/
