/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:29:49 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:29:51 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
#include <string.h>
int    main(void)
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
    b->next=NULL;
    
    
    c->content="Ahil";
    c->next=NULL;
    
    //printf("%s\n",(char *)(*lst)->content);
    printf("%s\n",(char *)lst[0]->content);
    
    ft_lstadd_front(lst, c);
    
    printf("%s\n",(char *)lst[0]->content);
    //printf("%s\n",(char *)(*lst)->content);
}*/
