/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:29:33 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:29:34 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(int n)
{
	size_t	count;

	count = 0;
	if (n < 0 || n == 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		slen;
	const char	*digits;

	digits = "0123456789";
	slen = get_digits(n);
	str = (char *)malloc(sizeof(char) * (slen + 1));
	if (!str)
		return (0);
	str[slen] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n > 0)
			str[--slen] = digits[n % 10];
		else
			str[--slen] = digits[n % 10 * -1];
		n /= 10;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	printf("%s\n", ft_itoa(123));
}*/
