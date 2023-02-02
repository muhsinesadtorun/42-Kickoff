/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:09:28 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/11 18:09:30 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_func(t_swap *a, t_swap *b)
{
	free(a->array);
	free(b->array);
	exit(1);
}

void	error_message(t_swap *a, t_swap *b)
{
	write(2, "Error\n", 6);
	free_func(a, b);
}
