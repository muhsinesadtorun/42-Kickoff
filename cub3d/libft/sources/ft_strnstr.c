/* ************************************************************************** */
/*                                                                            */
/*   ft_strnstr.c                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:20 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	jndex;

	jndex = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && jndex < len)
	{
		index = 0;
		while (needle[index] && haystack[index] == needle[index]
			&& ((jndex + index) < len))
			index++;
		if (!needle[index])
			return ((char *)haystack);
		jndex++;
		haystack++;
	}
	return (0);
}
