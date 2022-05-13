/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:38:07 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/15 14:24:29 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	arr[] = "University";

	printf("Before array: %s\n", arr);

	bzero(arr,5);

	printf("After array:  %s\n", arr);
	
	return (0);
}
*/
