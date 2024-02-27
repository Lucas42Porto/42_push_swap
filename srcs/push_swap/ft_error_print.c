/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:48:13 by lumarque          #+#    #+#             */
/*   Updated: 2024/02/19 15:48:14 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//Here an error message is being printed out
void	ft_error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}
