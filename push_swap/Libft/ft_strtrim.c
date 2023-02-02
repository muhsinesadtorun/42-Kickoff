/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:34:12 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:34:13 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	slen = ft_strlen(s1);
	while (slen && ft_strchr(set, s1[slen]))
		--slen;
	return (ft_substr(s1, 0, slen + 1));
}
/*#include <stdio.h>
int	main()
{
	char	a[] = "2635ilk333nur23172";
	char	b[] = "1234567";

	printf("%s\n", ft_strtrim(a, b));
}*/
