/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:18:14 by lumarque          #+#    #+#             */
/*   Updated: 2023/07/29 18:24:02 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_data *src, t_data *dst)
{
	t_data	*tmp;

	if (!(src))
		return ;
	tmp = (src)->next;
	(src)->next = dst;
	dst = src;
	src = tmp;
}

static void	swap(t_data *top)
{
	int	tmp;

	if (!(top) || (top) == (top)->next)
		return ;
	tmp = top->n;
	top->n = top->next->n;
	top->next->n = tmp;
	
}

static void	rotate(t_data *first, bool is_reverse)
{
	t_data* last;
	t_data* second_node;
	
	if (!(first) || (first) == (first)->next)
		return ;
	last = first;
	while (last->next)
		last = last->next;
	if (is_reverse == false)
	{
		first = (first)->next;
		first->next->prev = NULL;
	}
	else
	{
		second_node = first->next;
		second_node->prev = NULL;
	}
	last->next = first;
	first->prev = last;
	first->next = NULL;
}

void	run_action(t_type action, t_stack *stack)
{
	bool	is_reverse;

	is_reverse = false;
	if (action >= RRA)
		is_reverse = true;
	if (action == PA)
		push(&stack->b, &stack->a);
	if (action == PB)
		push(&stack->a, &stack->b);
	if (action == SA || action == SS)
		swap(&stack->a);
	if (action == SB || action == SS)
		swap(&stack->b);
	if (action == RA || action == RR || action == RRA || action == RRR)
		rotate(&stack->a, is_reverse);
	if (action == RB || action == RR || action == RRB || action == RRR)
		rotate(&stack->b, is_reverse);
}