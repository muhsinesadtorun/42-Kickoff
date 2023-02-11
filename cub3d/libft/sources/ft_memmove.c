/* ************************************************************************** */
/*                                                                            */
/*   ft_memmove.c                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:20 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *) src;
	b = (char *) dest;
	if (a < b)
		while (len--)
			b[len] = a[len];
	else
		ft_memcpy(b, a, len);
	return (dest);
}
