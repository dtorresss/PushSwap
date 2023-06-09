/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:51:31 by dtorres-          #+#    #+#             */
/*   Updated: 2023/05/30 17:18:44 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stddef.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct t_listNode{
	long long					nbr;
	struct t_listNode			*next;
	struct t_listNode			*prev;
}	t_node;

typedef t_node	*t_stack;

void	create_empty(t_stack *l);
void	show_list(t_stack *l);
void	insert_by_start(t_stack *l, long long nbr);
void	insert_by_end(t_stack *l, long long nbr);
int		is_empty(t_stack *l);
int		is_ordered(t_stack l);
void	order(t_stack *a);
int		size(t_stack *l);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif
