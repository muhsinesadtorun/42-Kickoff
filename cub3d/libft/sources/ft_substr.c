/* ************************************************************************** */
/*                                                                            */
/*   ft_substr.c                                          :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:20 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t leng)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	if (start + ft_strlen(str) < leng)
		leng = start + ft_strlen(str);
	res = (char *) malloc(sizeof(char) * (leng + 1));
	if (!res)
		return (NULL);
	while (i < leng && str[start] && start < ft_strlen(str))
		res[i++] = str[start++];
	res[i] = '\0';
	return (res);
}
