/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:34:05 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:34:07 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	if (!c)
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == (unsigned char)c)
			last = (char *)s;
		s++;
	}
	return (last);
}
/*#include <stdio.h>
int	main()
{
	char	s[] = "yarikan";
	char	c[] = "";

	printf("%s\n", ft_strrchr(s, *c));
}*/
