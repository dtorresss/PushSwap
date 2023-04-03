/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:38:30 by dtorres-          #+#    #+#             */
/*   Updated: 2023/01/20 14:04:08 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp_lst;
	t_list	*toadd;

	if (!lst)
		return (NULL);
	temp_lst = 0;
	while (lst)
	{
		toadd = ft_lstnew(f(lst->content));
		if (!toadd)
		{
			ft_lstclear(&temp_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&temp_lst, toadd);
		lst = lst->next;
	}
	return (temp_lst);
}
