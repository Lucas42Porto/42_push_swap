/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:54:46 by lumarque          #+#    #+#             */
/*   Updated: 2023/08/05 15:16:36 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(int ac, char **av)
{
	t_stack		*stack_a;
	long int	n;
	int			i;

	stack_a = NULL;
	n = 0;
	i = 1;
	while (i < ac)
	{
		n = ft_atoi(av[i]);
		if (i == 1)
			stack_a = new_node((int)n);
		else
			add_at_end(&stack_a, new_node((int)n));
		i++;
	}
	return (stack_a);

}


int main (int ac, char** av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (ac < 2)
		exit(EXIT_SUCCESS);
	stack_a = init_stack(ac, av);
	stack_b = NULL;
	if (is_lst_ordered(stack.a) == true)
		exit(EXIT_SUCCESS);
	testing(&stack);
	exit(EXIT_SUCCESS);
}