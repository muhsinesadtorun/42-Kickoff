/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:29:41 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:29:43 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	lastnode = ft_lstlast(*lst);
	if (!lastnode)
		*lst = new;
	else
		lastnode->next = new;
}
/*#include <stdio.h>
int main(void)
{
	t_list *a,*b,*c;
	a=malloc(sizeof(t_list));
	b=malloc(sizeof(t_list));
	c=malloc(sizeof(t_list));
	a->content="ilknur";
	a->next=b;
	b->content="yarikan";
	c->content="Ahil";
	c->next=NULL;
	ft_lstadd_back(&a,c);
	printf("%s\n",(char*)(ft_lstlast(a))->content);
}*/
