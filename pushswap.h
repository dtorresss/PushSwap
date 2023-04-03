/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:51:31 by dtorres-          #+#    #+#             */
/*   Updated: 2023/04/03 15:00:00 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stddef.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct t_stackNode{
	int					nbr;
	struct t_stackNode	*next;
}	t_node;

typedef t_node	*t_stack;

void	create_empty(t_stack *s);
int		is_empty(t_stack *s);
void	stake(t_stack *s, int nbr);
int		pop(t_stack *s);
void	show_stack(t_stack *s);
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
