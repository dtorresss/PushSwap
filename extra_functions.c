/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:33:41 by dtorres-          #+#    #+#             */
/*   Updated: 2023/05/30 17:34:59 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	show_list(t_stack *l)
{
	t_node	*aux;

	aux = *l;
	while (aux != NULL)
	{
		ft_printf("%d\n", aux->nbr);
		aux = aux->next;
	}
}

int	is_ordered(t_stack l)
{
	int		i;
	t_node	*aux;

	i = 0;
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

void	order(t_stack *a)
{
	t_stack	b;

	create_empty(&b);
	*a = NULL;
}
