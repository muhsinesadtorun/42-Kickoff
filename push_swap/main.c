/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:05:02 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/16 00:40:34 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_swap	a;
	t_swap	b;

	a.stack = 'a';
	b.stack = 'b';
	if (argc >= 2)
		more_args(argv, &a, &b);
	else
		return (0);
	check_double(&a, &b);
	check_list(&a, &b);
	indexing(&a);
	if (a.size > 5)
		sort_list(&a, &b);
	else
		smaller_list(&a, &b);
	free(a.array);
	free(b.array);
	return (0);
}
