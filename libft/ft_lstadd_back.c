/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:02:23 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/17 19:07:16 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_lst;

	if (new)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		new_lst = ft_lstlast(*lst);
		new_lst->next = new;
	}
}
