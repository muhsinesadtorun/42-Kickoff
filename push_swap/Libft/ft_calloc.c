/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:27:50 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:27:52 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buf;

	buf = (void *)malloc(count * size);
	if (!buf)
		return (NULL);
	ft_bzero(buf, count * size);
	return (buf);
}
/*#include <stdio.h>
int	main()
{
	char	*dst;

	dst = (char *)ft_calloc(30, 1);
	printf("\n %s", dst);
	printf("%d\n", *dst);
}*/
