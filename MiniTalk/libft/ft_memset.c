/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:07:35 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/15 14:14:16 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	void	*ret;

	i = 0;
	ret = b;
	while (i < len)
	{
		*(char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	arr[] = "University";

	printf("Before array: %s\n", arr);

	ft_memset(arr,'x',5);

	printf("After array:  %s\n", arr);
	
	return (0);
}
*/
