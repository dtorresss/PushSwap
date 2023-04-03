/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:44:33 by dtorres-          #+#    #+#             */
/*   Updated: 2023/03/12 15:27:13 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node_tmp;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		node_tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node_tmp;
	}
}
