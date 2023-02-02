/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:33:42 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:33:44 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*nstring;
	size_t	nstringlen;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	nstringlen = ft_strlen(s);
	nstring = malloc(sizeof(char) * (nstringlen + 1));
	if (!nstring)
		return (NULL);
	while (*s)
	{
		nstring[i] = f(i, (char)*s);
		s++;
		i++;
	}
	nstring[i] = '\0';
	return (nstring);
}
/*#include <stdio.h>
char	f(unsigned int i, char c)
{
	return (c + 1);
}
int	main()
{
	char	*str;

	//str = "abcde";
	printf("%s\n", ft_strmapi("abc", f));
	//printf("%d\n" str);
}*/
