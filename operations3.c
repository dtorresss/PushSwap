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

void	rra(t_stack *a)
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
		sa(a);
	if (size_s > 2)
	{
		insert_by_start(a, nbr);
		delete_last(a);
	}
}

void	rrb(t_stack *b)
{
	rra(b);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rra(b);
}
