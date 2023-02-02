/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:33:10 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:33:12 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (*s)
		f(i++, s++);
}
/*void	f(unsigned int i, char *c)
{
	*c = *c + 1;
}
#include <stdio.h>
int	main()
{
	char	str[] = "aBcDeF";

	ft_striteri(str, f);
	printf("%s\n", str);
}*/
