/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:05:04 by lumarque          #+#    #+#             */
/*   Updated: 2023/08/20 16:58:00 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(const char *str)
{
	long			result;
	long			sign;
	unsigned int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' \
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return ((int)(result * sign));
}

int	stack_size(t_stack *st)
{
	int		size;
	t_stack	*s;

	size = 0;
	s = st;
	while (s)
	{
		size++;
		s = s->next;
	}
	return (size);
}

int is_lst_ordered(t_stack *st)
{
	t_stack	*s;

	s = st;
	while (s)
	{
		if (s->n > s->next->n)
			return (1);
		s = s->next;
	}
	return (0);
	
}

int	stack_min(t_stack *a)
{
	int		i;

	i = a->n;
	while (a)
	{
		if (a->n < i)
			i = a->n;
		a = a->next;
	}
	return (i);
}

int	stack_max(t_stack *a)
{
	int		i;

	i = a->n;
	while (a)
	{
		if (a->n > i)
			i = a->n;
		a = a->next;
	}
	return (i);
}