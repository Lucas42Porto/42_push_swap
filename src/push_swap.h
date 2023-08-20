/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:49:24 by lumarque          #+#    #+#             */
/*   Updated: 2023/08/20 16:58:43 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
#include <stdbool.h>

/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
**                              MACROS
*/
typedef enum e_type {
	PA,
	PB,
	SA,
	SB,
	SS,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR
}	t_type;

typedef struct s_stack
{
	int				n;
	unsigned int	pos;
	struct s_stack	*next;
}					t_stack;



int			is_correct_input(char **arg);
int			stack_size(t_stack *st);
t_stack		*create_stack(int ac, char **av);
void		get_main_index(t_stack *sa, int size);
int			is_lst_ordered(t_stack *st);

void		swap_move(t_stack **sa, t_stack **sb, char *choice);
void		small_sort(t_stack **st);
void		rotate_move(t_stack **sa, t_stack **sb, char *choice);
void		big_sort(t_stack **sa, t_stack **sb);

void		less_moves_sort(t_stack **sa, t_stack **sb);
int			get_lower_position(t_stack **st);
void		where_fit_in_a(t_stack **sa, t_stack **sb);
void		get_stack_positions(t_stack **st);
void		calculate_moves(t_stack **sa, t_stack **sb);

int			ft_strcmp(char *s1, char *s2);
int			absolute(int n);
long int	ft_atoi(const char *s);
void		ft_putstr(char *s);
void		free_stack(t_stack **st);
void		print_error_and_exit(t_stack **sa, t_stack **sb);

/////////////////////////////////////////////////////////////////////////

void testing(t_stack stack_a, t_stack stack_b);
void	run_action(t_type action, t_stack *a, t_stack *b);
int	stack_max(t_stack *a);
int	stack_min(t_stack *a);

#endif