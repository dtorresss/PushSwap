/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:04:33 by dtorres-          #+#    #+#             */
/*   Updated: 2023/04/03 15:50:11 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	create_empty(t_stack *s)
{
	*s = NULL;
}

int	is_empty(t_stack *s)
{
	return ((*s) == NULL);
}

void	stake(t_stack *s, int nbr)
{
	t_stack	aux;

	aux = (t_stack)malloc(sizeof (t_node));
	aux->next = *s;
	aux->nbr = nbr;
	*s = aux;
}

int	pop(t_stack *s)
{
	int		nbr;
	t_node	*aux;

	nbr = (*s)->nbr;
	aux = (t_node *) malloc(sizeof (t_node));
	aux = (*s)->next;
	*s = aux;
	return (nbr);
}

void	show_stack(t_stack *s)
{
	while (!is_empty(s))
	{
		ft_printf("%d\n", pop(s));
	}
}
