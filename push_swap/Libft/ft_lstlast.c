/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:31:06 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:31:08 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
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
	c->content = "yarikan";
	c->next = NULL;

    *test = a;
    ft_lstlast(a);

}*/
