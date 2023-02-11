/* ************************************************************************** */
/*                                                                            */
/*   ft_strdup.c                                          :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:20 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	size_t	leng;

	leng = ft_strlen(src) + 1;
	dest = malloc(sizeof(src[0]) * leng);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, src, leng);
	return (dest);
}
