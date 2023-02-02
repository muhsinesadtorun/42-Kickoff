/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:33:01 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:33:04 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*buf;

	len = ft_strlen(s1);
	buf = malloc(len + 1);
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, s1, len + 1);
	return (buf);
}
/*#include <stdio.h>
int	main()
{
	char	s1[] = "ilknur yarikan";

	printf("%s\n", ft_strdup(s1));
}*/
