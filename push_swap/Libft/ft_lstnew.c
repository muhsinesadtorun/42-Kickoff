/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:31:30 by mtorun            #+#    #+#             */
/*   Updated: 2022/10/15 16:31:33 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelement;

	newelement = malloc(sizeof(t_list));
	if (!newelement)
		return (NULL);
	newelement->content = content;
	newelement->next = NULL;
	return (newelement);
}
/*#include <stdio.h>
int	main()
{
	char	*a = "ilknur";

	ft_lstnew(a);
	printf("%s", a);
}*/
