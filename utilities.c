/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:04:33 by dtorres-          #+#    #+#             */
/*   Updated: 2023/05/25 16:34:17 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

#include <stdio.h>
#include <stdlib.h>

void	create_empty(t_stack *l)
{
	l->start = NULL;
	l->end = NULL;
}

void	insert_by_start(t_stack *l, long long nbr)
{
	t_node	*aux;

	aux = (t_node *)malloc(sizeof(t_node));
	aux->nbr = nbr;
	aux->next = l->start;
	if (is_empty(l))
		l->end = aux;
	l->start = aux;
}

int	is_empty(t_stack *l)
{
	return ((l->start == NULL) && (l->end == NULL));
}

void	insert_by_end(t_stack *l, long long nbr)
{
	t_node	*aux;

	if (is_empty(l))
		insert_by_start(l, nbr);
	else
	{
		aux = (t_node *) malloc(sizeof(t_node));
		aux->nbr = nbr;
		aux->next = NULL;
		l->end->next = aux;
		l->end = aux;
	}
}

int	size(t_stack *l)
{
	t_node	*aux;
	int		i;

	i = 0;
	aux = l->start;
	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
