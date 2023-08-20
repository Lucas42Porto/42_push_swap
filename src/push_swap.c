/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:54:46 by lumarque          #+#    #+#             */
/*   Updated: 2023/08/20 16:14:24 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char** av)
{
	t_stack	stack_a;
	t_stack	stack_b;
	
	if (ac < 2)
		exit(EXIT_SUCCESS);
	stack_a = init_stack(ac, av);
	stack_b = NULL;
	if (!(is_lst_ordered(stack_a))
		testing(&stack_a, &stack_b);
	exit(EXIT_SUCCESS);
}