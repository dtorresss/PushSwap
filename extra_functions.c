/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:33:41 by dtorres-          #+#    #+#             */
/*   Updated: 2023/05/25 16:47:03 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	show_list(t_stack *l)
{
	t_node	*aux;

	aux = l->start;
	while (aux != NULL)
	{
		ft_printf("%d\n", aux->nbr);
		aux = aux->next;
	}
}

/*
void	delete_element(t_stack *l, long long nbr)
{
	t_node	*act;
	t_node	*ant;

	act = l->start;
	ant = NULL;
	while (act->nbr != nbr && act != NULL)
	{
		if (act->nbr == nbr)
		{
			if ((l->start == act) && (l->end == act))
			{
				l->start = NULL;
				l->end = NULL;
			}
			else if (ant == NULL)
				l->start = act->next;
			else if (l->end == act)
			{
				l->end = ant;
				l->end->next = NULL;
			}
			else
				ant->next = act->next;
			free(act);
		}
		else
		{
			ant = act;
			act = act->next;
		}
	}
}
*/

void	delete_element(t_stack *l, long long nbr)
{
	t_node	*act;
	t_node	*ant;

	act = l->start;
	ant = NULL;
	while (act != NULL && act->nbr != nbr)
	{
		ant = act;
		act = act->next;
	}
	if (act == NULL)
		return ;
	if (l->start == act)
		l->start = act->next;
	if (l->end == act)
		l->end = ant;
	if (ant != NULL)
		ant->next = act->next;
}
