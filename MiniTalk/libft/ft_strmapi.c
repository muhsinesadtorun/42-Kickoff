/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:28:20 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/13 19:01:29 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	char	*tmp;
	int		i;

	i = 0;
	if (s == NULL)
		return (0);
	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (0);
	tmp = new;
	while (s[i])
	{	
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (tmp);
}
