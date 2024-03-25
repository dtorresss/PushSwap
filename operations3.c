/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:23:27 by dtorres-          #+#    #+#             */
/*   Updated: 2023/05/30 16:17:21 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	delete_last(t_stack *a)
{
	t_stack	act;

	act = *a;
	while (act->next != NULL)
		act = act->next;
	act->prev->next = NULL;
}

void	rra(t_stack *a, int i)
{
	int		size_s;
	int		nbr;
	t_node	*aux;

	aux = *a;
	size_s = size(a);
	while (aux->next != NULL)
		aux = aux->next;
	nbr = aux->nbr;
	if (size_s == 2)
		sa(a, i);
	if (size_s > 2)
	{
		insert_by_start(a, nbr);
		delete_last(a);
	}
	if (i == 1)
	{
		ft_printf("rrb\n");
		return ;
	}
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	rra(b, 1);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a, 0);
	rra(b, 1);
}
