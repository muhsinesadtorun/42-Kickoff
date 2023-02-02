/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:28:46 by aakcan            #+#    #+#             */
/*   Updated: 2022/07/02 02:35:25 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*curr;

	if (!lst)
		return (NULL);
	result = ft_lstnew(f(lst->content));
	if (!result)
		return (0);
	curr = result;
	lst = lst->next;
	while (lst)
	{
		curr->next = ft_lstnew(f(lst->content));
		if (!curr->next)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		curr = curr->next;
		lst = lst->next;
	}
	return (result);
}

/*
’lst’ listesi üzerinde dolaşır ve ‘f’ fonksiyonunu
listenin her eleamanına uygular. Uygulama
sonucunda oluşan yeni elemenlardan yeni bir
liste oluşturulur. Gerekli olduğu durumlarda
delete fonksiyonu kullanıalarak elemanın içeriği
temizlenebilir.
#2. Listenin içerisinde gezinmek için kullanılacak
olan fonksiyonun adresi.
#3. Gerekli olduğunda elemanın içeriğini
temizlemeye yardımcı olan fonksiyonun adresi.
 */
