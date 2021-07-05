/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:53:09 by ametta            #+#    #+#             */
/*   Updated: 2021/07/05 09:17:39 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sorting_program/includes/lib.h"

void	rra(t_list **stack_a)
{
	if (*stack_a && ft_lstlen(*stack_a) > 1)
	{
		*stack_a = (*stack_a)->prec;
		ft_putendl("rra");
	}
}

void	rrb(t_list **stack_b)
{
	if (*stack_b && ft_lstlen(*stack_b) > 1)
	{
		*stack_b = (*stack_b)->prec;
		ft_putendl("rrb");
	}
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a && ft_lstlen(*stack_a) > 1)
	{
		if (*stack_b && ft_lstlen(*stack_b) > 1)
		{
			*stack_b = (*stack_b)->prec;
			*stack_a = (*stack_a)->prec;
			ft_putendl("rrr");
		}
	}
}
