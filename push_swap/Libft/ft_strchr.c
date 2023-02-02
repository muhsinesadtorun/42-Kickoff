/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:32:56 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:32:58 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*(unsigned char *)s != (unsigned char)c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
/*#include <stdio.h>
int	main()
{
	char	s[] = "yarikan";
	char	c[] = "a";

	printf("%s\n", ft_strchr(s, *c));
}*/
