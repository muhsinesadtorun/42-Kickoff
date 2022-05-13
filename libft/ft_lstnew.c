/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:26:14 by mtorun            #+#    #+#             */
/*   Updated: 2022/02/17 19:02:06 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->next = 0;
	new->content = content;
	return (new);
}
/*
int	main (void)
{
	char	*str;
	char	*s2;
	t_list	*lst1;
	
	str = "Ahmet";
	s2 = "Şahin";
	lst1 = ft_lstnew (str);
	lst1->next = ft_lstnew (s2);	
	printf("%s\n",lst1->content);
	printf("%s\n",lst1->next->content);
}
*/
