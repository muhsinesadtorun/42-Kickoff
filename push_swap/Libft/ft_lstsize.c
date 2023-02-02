/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:31:37 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:31:39 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	sayac;

	if (!lst)
		return (0);
	sayac = 0;
	while (lst)
	{
		sayac++;
		lst = lst->next;
	}
	return (sayac);
}
/*#include <stdio.h>
int main()
{
    t_list **test = malloc(sizeof(t_list *));;
    t_list *a = malloc(sizeof(t_list));
    t_list *b= malloc(sizeof(t_list));
    t_list *c= malloc(sizeof(t_list));
    a->next = b;
    b->content = "ilknur";
    b->next = c;

    *test = a;
    ft_lstsize(*test);
    printf("%d",ft_lstsize(*test));

}*/
