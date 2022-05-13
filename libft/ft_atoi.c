/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:11:26 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/15 16:36:57 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		is_neg;
	long	res;

	if (*str == '\0')
		return (0);
	is_neg = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			is_neg *= -1;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i++] - '0');
		if (res * is_neg < INT_MIN)
			return (0);
		else if (res * is_neg > INT_MAX)
			return (-1);
	}
	return (res * is_neg);
}
/*
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("ft_atoi:\noutput: %d\n",ft_atoi(argv[1]));
	}
	else
		return (0);
}
*/
