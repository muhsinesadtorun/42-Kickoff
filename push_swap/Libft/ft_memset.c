/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:32:15 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:32:17 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = b;
	while (len > 0)
	{
		*a = c;
		a++;
		len--;
	}
	return (b);
}
/*int	main()
{
	char	a[] = "ilknur";

	ft_memset(a, 'x', 3);
	printf("%s\n", a);
}*/
