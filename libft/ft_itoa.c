/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:55:40 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/15 16:40:57 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_itoa_len(int n)
{
	long	temp;
	int		i;

	temp = n;
	i = 0;
	if (n < 0)
	{
		temp *= -1;
		i++;
	}
	while (temp > 9)
	{
		temp /= 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	temp;
	int		len;

	len = ft_itoa_len (n);
	temp = n;
	i = 0;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	if (temp < 0)
	{
		temp *= -1;
		str[0] = '-';
		i = 2;
	}
	while (len >= i && len-- > 0)
	{
		str[len] = "0123456789"[temp % 10];
		temp /= 10;
	}
	return (str);
}
/*
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	num;

		num = ft_atoi(argv[1]);

		printf("ft_itoa:\noutput: %s\n",ft_itoa(num));
	}
	else
		return (0);
}
*/
