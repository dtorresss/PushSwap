/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:54:50 by dtorres-          #+#    #+#             */
/*   Updated: 2023/05/30 14:00:38 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_stack *a, int i)
{
	long long	e1;
	long long	e2;

	if (size(a) >= 2)
	{
		e1 = (*a)->nbr;
		e2 = (*a)->next->nbr;
		(*a)->nbr = e2;
		(*a)->next->nbr = e1;
	}
	if (i == 1)
	{
		ft_printf("sb\n");
		return ;
	}
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	sa(b, 1);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a, 0);
	sa(b, 1);
}

void	pa(t_stack *a, t_stack *b, int i)
{
	long long	e1;

	if (!is_empty(b))
	{
		e1 = (*b)->nbr;
		insert_by_start(a, e1);
		*b = (*b)->next;
	}
	if (i == 1)
	{
		ft_printf("pb\n");
		return ;
	}
	ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	pa(b, a, 1);
}
