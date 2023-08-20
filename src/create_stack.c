/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:09:34 by lumarque          #+#    #+#             */
/*   Updated: 2023/08/20 17:02:35 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack *new_node(int n)
{
	t_stack	*s;

	s = (t_stack *)malloc(sizeof(t_stack));
	if (!s)
		return (NULL);
	s->n = n;
	s->pos = 0;
	s->next = NULL;
	return (s);
}

static void	add_at_end(t_stack **st, t_stack *new)
{
	t_stack	*s;

	if (!new)
		return ;
	if (!*st)
		*st = new;
	else
	{
		s = *st;
		while (s->next)
			s = s->next;
		s->next = new;
	}
}

t_stack	*init_stack(int ac, char **av)
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

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}