/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:54:50 by dtorres-          #+#    #+#             */
/*   Updated: 2023/05/25 16:37:08 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_stack *a)
{
	long long	e1;
	long long	e2;

	if (size(a) >= 2)
	{
		e1 = a->start->nbr;
		e2 = a->start->next->nbr;
		a->start->nbr = e2;
		a->start->next->nbr = e1;
	}
}

void	sb(t_stack *b)
{
	sa(b);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sa(b);
}

void	pa(t_stack *a, t_stack *b)
{
	long long	e1;

	if (!is_empty(b))
	{
		e1 = b->start->nbr;
		insert_by_start(a, e1);
		b->start = b->start->next;
	}
}

void	pb(t_stack *a, t_stack *b)
{
	pa(b, a);
}
