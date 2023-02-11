/* ************************************************************************** */
/*                                                                            */
/*   ft_strncmp.c                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:20 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	if ((!str1 && !str2) || size < 1)
		return (0);
	while (size - 1 > i && str1[i] == str2[i] && str1[i] && str2[i])
		i++;
	return ((unsigned char) str1[i] - (unsigned char)str2[i]);
}
