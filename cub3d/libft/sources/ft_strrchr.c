/* ************************************************************************** */
/*                                                                            */
/*   ft_strrchr.c                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:20 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	position;

	position = ft_strlen(str);
	if (str)
	{
		while (str[position] != (char) c && position >= 0)
			position--;
		if (str[position] == (char)c)
			return ((char *) &str[position]);
		return (NULL);
	}
	return (NULL);
}
