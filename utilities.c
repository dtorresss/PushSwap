/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:04:33 by dtorres-          #+#    #+#             */
/*   Updated: 2023/05/30 17:01:18 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

#include <stdio.h>
#include <stdlib.h>

void	create_empty(t_stack *l)
{
	*l = NULL;
}

void	insert_by_start(t_stack *l, long long nbr)
{
	t_node	*aux;

	aux = (t_node *)malloc(1*sizeof(t_node));
	aux->nbr = nbr;
	aux->next = *l;
	aux->prev = NULL;
	if (!is_empty(l))
		(*l)->prev = aux;
	(*l) = aux;
}

int	is_empty(t_stack *l)
{
	return (*l == NULL);
}

void	insert_by_end(t_stack *l, long long nbr)
{
	t_node	*aux;
	t_stack	act;

	if (is_empty(l))
		insert_by_start(l, nbr);
	else
	{
		act = *l;
		while (act->next != NULL)
			act = act->next;
		aux = (t_node *) malloc(sizeof(t_node));
		aux->nbr = nbr;
		act->next = aux;
		aux->prev = act;
		aux->next = NULL;
	}
}

int	size(t_stack *l)
{
	t_node	*aux;
	int		i;

	i = 0;
	aux = *l;
	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
