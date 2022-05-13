/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:16:21 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/15 16:08:42 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (dst == NULL && src == NULL && len)
		return (dst);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	str[] = "Lorem Ipsum is simply dummy text";

	char	str1[] = "It is a long established fact that a reader";
	
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};

	printf("Before:\nstr: %s\n",str);
	
	ft_memmove(str +9,str,5);
	//ft_memmove(sResult + 1, sResult, 2);

	printf("After:\nstr: %s\n",str);

	return (0);

}
*/
