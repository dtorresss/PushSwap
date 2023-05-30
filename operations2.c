/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:33:11 by dtorres-          #+#    #+#             */
/*   Updated: 2023/05/30 16:15:38 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_stack *a)
{
	int	size_s;
	int	nbr;

	size_s = size(a);
	nbr = (*a)->nbr;
	if (size_s == 2)
		sa(a);
	if (size_s > 2)
	{
		*a = (*a)->next;
		insert_by_end(a, nbr);
	}
}

void	rb(t_stack *b)
{
	ra(b);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	ra(b);
}
