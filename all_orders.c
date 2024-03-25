/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_orders.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:59:05 by dtorres-          #+#    #+#             */
/*   Updated: 2024/03/25 11:24:18 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	order_aux(t_stack *a, t_stack *b)
{
	while (!is_empty(a))
	{
		if ((*b)->nbr == find_max(b))
			pa(a, b, 0);
		else
		{
			if (is_close_to_top(b, find_max(b)))
				rb(b);
			else
				rrb(b);
		}
	}
}

void	order(t_stack *a, t_stack *b)
{
	long		limit;

	limit = average(a);
	while (!is_empty(a))
	{
		if (contains_below(a, limit))
		{
			if ((*a)->nbr <= limit)
				pb(a, b);
			else
				ra(a, 0);
		}
		else
			limit = average(a);
	}
	order_aux(a, b);
}

void	order_three(t_stack *a)
{
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a, 0);
	if ((*a)->next->nbr > (*a)->next->next->nbr)
	{
		rra(a, 0);
		if ((*a)->nbr > (*a)->next->nbr)
			sa(a, 0);
	}
}

void	order_five(t_stack *a, t_stack *b)
{
	int	s_size;

	s_size = size(a);
	while (s_size > 3)
	{
		if ((*a)->nbr == find_min(a))
			pb(a, b);
		else if ((*a)->next->nbr == find_min(a)
			|| (*a)->next->next->nbr == find_min(a))
			ra(a, 0);
		else
			rra(a, 0);
		s_size = size(a);
	}
	order_three(a);
	while (!is_empty(b))
		pa(a, b, 0);
}

int	is_ordered(t_stack l)
{
	t_node	*aux;

	aux = l;
	while (aux->next != NULL)
	{
		if (aux->nbr < aux->next->nbr)
			aux = aux->next;
		else
			return (0);
	}
	return (1);
}
