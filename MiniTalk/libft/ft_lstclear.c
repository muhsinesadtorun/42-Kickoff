/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:33:01 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/17 19:14:36 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_lst;

	if (*lst)
	{
		while (*lst)
		{
			tmp_lst = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp_lst;
		}
		*lst = 0;
	}
}
