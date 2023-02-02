/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:30:58 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:31:00 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*#include <stdio.h>
void f(void *lst)
{
    printf("geldim  ");
    return ;
}
int main()
{
    t_list *a,*b,*c;
    a=malloc(sizeof(t_list));
    b=malloc(sizeof(t_list));
    c=malloc(sizeof(t_list));
    t_list **lst = malloc(sizeof(t_list *));
    *lst = a;
    a->content="ilknur";
    a->next=b;
    b->content="yarikan";
    b->next=c;
    c->content="Ahil";
    c->next=NULL;
    
    ft_lstiter(a, f);
}*/
