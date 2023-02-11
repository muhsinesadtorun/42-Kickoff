/* ************************************************************************** */
/*                                                                            */
/*   ft_memchr.c                                          :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:20 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	unsigned char	*ptr;

	while (size-- > 0)
	{
		ptr = (unsigned char *) str;
		if (*ptr == (unsigned char)c)
		{
			return (ptr);
		}
		str++;
	}
	return (NULL);
}
