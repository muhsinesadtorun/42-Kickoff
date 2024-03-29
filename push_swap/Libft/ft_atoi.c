/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:25:45 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:25:51 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	long	result;
	int		i;

	result = 0;
	i = 1;
	while (((*str >= 9 && *str <= 13) || *str == 32) && *str)
		str++;
	if (*str == '-')
	{
		i = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + *str - '0';
		str++;
		if (result * i > INT_MAX)
			return (-1);
		else if (result * i < INT_MIN)
			return (0);
	}
	return (i * result);
}
/*#include <stdio.h>
int	main()
{
	char	str[] = "-123";

	printf("%d\n", ft_atoi(str));
}*/
