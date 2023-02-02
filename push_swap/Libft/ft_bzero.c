/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:26:42 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:27:14 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int	main()
{
	char	dst[] = "pazartesi";
	printf("Girilen değer = %s, \nSonuç = \n",dst);
	ft_bzero(dst,5);
	printf("%s", dst);
}*/
