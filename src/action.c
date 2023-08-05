/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:18:14 by lumarque          #+#    #+#             */
/*   Updated: 2023/08/05 16:36:56 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack *src, t_stack *dst)
{
	t_stack	*tmp;

	if (!src)
		return ;
	tmp = src->next;
	src->next = dst;
	dst = src;
	src = tmp;
}

static void	swap(t_stack *top)
{
	int	tmp;

	if (!top || top == top->next)
		return ;
	tmp = top->n;
	top->n = top->next->n;
	top->next->n = tmp;
	
}

static void	rotate(t_stack *first, bool is_reverse)
{
	t_stack* last;
	t_stack* aux;
	
	if (!first || first == first->next)
		return ;
	last = first;
	while (last->next)
		last = last->next;
	if (is_reverse == false)
	{
		aux = first;
		first = first->next;
		last->next = aux;
		aux->next = NULL;
	}
	else
	{	
		while (aux->next->next)
			aux = aux->next;
		aux->next = NULL;
		last->next = first;
	}

}

void	run_action(t_type action, t_stack a, t_stack b)
{
	bool	is_reverse;

	is_reverse = false;
	if (action >= RRA)
		is_reverse = true;
	if (action == PA)
		push(&b, &a);
	if (action == PB)
		push(&a, &b);
	if (action == SA || action == SS)
		swap(&a);
	if (action == SB || action == SS)
		swap(&b);
	if (action == RA || action == RR || action == RRA || action == RRR)
		rotate(&a, is_reverse);
	if (action == RB || action == RR || action == RRB || action == RRR)
		rotate(&b, is_reverse);
}