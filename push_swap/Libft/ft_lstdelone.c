/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:30:48 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:30:50 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*#include <stdio.h>
void del1(void *lstdel)
{
    printf("fonksiyonda işlem gördükten sonrası...\n");
    return ;
}
int main(void)
{
    t_list *a,*b;
    a=(t_list*)malloc(sizeof(t_list));
    t_list **lst = malloc(sizeof(t_list *));
    *lst = a;
    a->content="fonksiyona gitmeden öncesi...";
    a->next=NULL;
    printf("%s\n", (char *)(*lst)->content);
    ft_lstdelone(a,del1);
}*/
