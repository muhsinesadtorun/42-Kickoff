/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:27:57 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:28:01 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || \
			(c >= 'A' && c <= 'Z') || \
			(c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main()
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum(' '));
}*/
