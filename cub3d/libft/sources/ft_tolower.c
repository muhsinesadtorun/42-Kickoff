/* ************************************************************************** */
/*                                                                            */
/*   ft_tolower.c                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:20 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
