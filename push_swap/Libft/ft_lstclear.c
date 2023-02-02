/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:30:39 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:30:41 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pos;

	if (!del)
		return ;
	while (*lst)
	{
		pos = *lst;
		*lst = pos->next;
		ft_lstdelone(pos, del);
	}
}
/*#include <unistd.h>
#include <stdio.h>
void del1(void *lstdel)
{
    printf("ben geldim");
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
    
    ft_lstclear(&a, del1);
    }*/
