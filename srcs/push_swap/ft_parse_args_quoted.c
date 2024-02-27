/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args_quoted.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:45:53 by lumarque          #+#    #+#             */
/*   Updated: 2024/02/19 15:45:55 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// This function free the string which is 
// the integer values in between quotes.
void	ft_freestr(char **lst)
{
	char	*n1;

	if (!lst)
		return ;
	while (*lst)
	{
		n1 = *lst;
		lst++;
		free(n1);
	}
	*lst = NULL;
}

// Function to parse the arguments from the quoted string
// and send them to list_args function to add them into list.
// With ft_split we split numbers from spaces.
t_stack	*ft_parse_args_quoted(char **argv)
{
	t_stack	*stack_a;
	char	**tmp;
	int		i;
	int		j;

	stack_a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	list_args(tmp, &stack_a);
	ft_freestr(tmp);
	free(tmp);
	return (stack_a);
}
