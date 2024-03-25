/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:51:31 by dtorres-          #+#    #+#             */
/*   Updated: 2024/03/25 11:18:06 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stddef.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct t_listNode
{
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
void	order(t_stack *a, t_stack *b);
void	order_three(t_stack *a);
void	order_five(t_stack *a, t_stack *b);
int		size(t_stack *l);
int		find_min(t_stack *l);
int		is_close_to_top(t_stack *a, int data);
int		find_max(t_stack *l);
long	average(t_stack *a);
int		contains_below(t_stack *a, long n);
void	sa(t_stack *a, int i);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b, int i);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a, int i);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a, int i);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif
