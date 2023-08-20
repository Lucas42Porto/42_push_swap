/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_logic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:08:11 by lumarque          #+#    #+#             */
/*   Updated: 2023/08/20 17:00:58 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void testing(t_stack stack_a, t_stack stack_b);
{
	int size;

	size = stack_size(stack_a)
	if (size == 2)
	{
		run_action(SA, stack_a, stack_b);
		write(1, "sa", 2);
		exit(EXIT_SUCCESS);
	}
	if (size == 3)
		sort_tri(stack_a);


}
static void	sort_tri(t_stack *stack_a)
{

	if (stack_min(stack_a) == stack_a->n)
	{
		run_action(RRA, stack_a, NULL);
		run_action(SA, stack_a, NULL);
	}
	else if (stack_max(stack_a) == stack_a->n)
	{
		run_action(RA, stack_a, NULL);
		if (!is_lst_ordered(stack_a))
		run_action(SA, stack_a, NULL);
	}
	else
	{
		if (ft_find_index(stack_a, stack_max(stack_a)) == 1)
		run_action(RRA, stack_a, NULL);
		else
		run_action(SA, stack_a, NULL);
	}
	// int	*arr;
	// arr = st->next;
	// //	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] < arr[0])
	// if(stack_a->n[0] > stack_a->next->n && \
	// 	stack_a->next->n < stack_a->next->next->n && \
	// 	stack_a->next->next->n < stack_a->n)
	// {
	// 	run_action(SA, stack_a, stack_b);
	// 	write(1, "sa", 2);
	// }

	// else if (stack_a->n[0] < stack_a->n[1] && \
	// 				stack_a->n[1] < stack_a->n[2] && \
	// 				stack_a->n[2] > stack_a->n[0])
	// {
	// 	run_action(SA, stack_a, NULL);
	// 	write(1, "sa\n", 3);
	// 	run_action(RRA, stack_a, NULL);
	// 	write(1, "rra\n", 4);
	// }
	// else if (stack_a->n[0] > stack_a->n[1] && \
	// 			stack_a->n[1] < stack_a->n[2] && \
	// 			stack_a->n[2] > stack_a->n[0])
	// {
	// 	run_action(RA, stack_a, NULL);
	// 	write(1, "ra", 2);
	// }

	// else if (stack_a->n[0] < stack_a->n[1] && stack_a->n[1] > stack_a->n[2] && stack_a->n[2] < stack_a->n[0])
	// {
	// 	run_action(SA, stack_a, NULL);
	// 	write(1, "sa", 2);
	// 	run_action(RA, stack_a, NULL);
	// 	write(1, "ra", 2);
	// }
	// else if (stack_a->n[0] < stack_a->n[1] && stack_a->n[1] > stack_a->n[2] && stack_a->n[2] > stack_a->n[0])
	// {
	// 	run_action(RRA, stack_a, NULL);
	// 	write(1, "rra", 3);
	// }


	// x < x + 1 ==> *
	// stack_a->n > last a == > ra
	// stack_a->n > stack_b->n ==> push b
	// stack_a->n < last b == > push b + rb
}