/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:09:08 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/11 21:09:11 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//duplicated control
void	check_double(t_swap *a, t_swap *b)
{
	int	i;
	int	j;

	i = 0;
	while (i < a->size)
	{
		j = i;
		while (j < a->size - 1)
		{
			if (a->array[i] == a->array[j++ + 1])
				error_message(a, b);
		}
		i++;
	}
}

//sequential or not?
void	check_list(t_swap *a, t_swap *b)
{
	int	i;
	int	counter;

	i = -1;
	counter = 1;
	while (++i < a->size - 1)
		if (a->array[i] < a->array[i + 1])
			counter = 0;
	if (counter == 1)
		free_func(a, b);
}
