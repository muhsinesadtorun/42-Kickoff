/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:31:13 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:31:16 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*pos;

	pos = NULL;
	while (lst)
	{
		temp = ft_lstnew((f(lst->content)));
		if (!temp)
		{
			ft_lstclear(&pos, del);
			return (NULL);
		}
		ft_lstadd_back(&pos, temp);
		lst = lst->next;
	}
	temp->next = NULL;
	return (pos);
}
/*include <stdio.h>
void *f(void *lst)
{
    printf("fonksiyonda işlem gördükten sonrası...\n");
    return(0);
}
void del1(void *lstdel)
{
    printf("del işlem gördükten sonrası...\n");
    return ;
}
int main(void)
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
    
        printf("%s\n",(char *)(*lst)->content);
        ft_lstmap(*lst, f, del1);
        printf("%s\n",(char *)(*lst)->content);
    }*/
