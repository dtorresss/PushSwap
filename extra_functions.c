/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:33:41 by dtorres-          #+#    #+#             */
/*   Updated: 2024/03/25 11:40:33 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/*void	show_list(t_stack *l)
{
	t_node	*aux;

	aux = *l;
	while (aux != NULL)
	{
		ft_printf("%d\n", aux->nbr);
		aux = aux->next;
	}
}*/

int	contains_below(t_stack *a, long n)
{
	int		i;
	int		s_size;

	s_size = size(a);
	i = 0;
	while (i <= s_size)
	{
		if ((*a)->nbr <= n)
			return (1);
		i++;
	}
	return (0);
}

long	average(t_stack *a)
{
	long	n;
	int		s_size;
	t_node	*aux;

	s_size = size(a);
	n = 0;
	aux = *a;
	while (aux != NULL)
	{
		n += aux->nbr;
		aux = aux->next;
	}
	n /= (s_size + 1);
	return (n);
}

int	find_min(t_stack *l)
{
	t_node	*aux;
	int		i;

	aux = *l;
	i = aux->nbr;
	while (aux->next != NULL)
	{
		if (aux->next->nbr < i)
			i = aux->next->nbr;
		aux = aux->next;
	}
	return (i);
}

int	find_max(t_stack *l)
{
	t_node	*aux;
	int		i;

	aux = *l;
	i = aux->nbr;
	while (aux->next != NULL)
	{
		if (aux->next->nbr > i)
			i = aux->next->nbr;
		aux = aux->next;
	}
	return (i);
}

int	is_close_to_top(t_stack *a, int data)
{
	int		i;
	int		s_size;
	t_node	*aux;

	s_size = size(a);
	aux = *a;
	i = aux->nbr;
	while (i > (s_size/ 2))
	{
		if (aux->nbr == data)
			return (1);
		i--;
		aux = aux->next;
	}
	return (0);
}
