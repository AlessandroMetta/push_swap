/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:53:04 by ametta            #+#    #+#             */
/*   Updated: 2021/06/09 09:53:04 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sorting_program/includes/lib.h"

void	ra(t_list **stack_a)
{
	if (*stack_a)
	{
		*stack_a = (*stack_a)->next;
		ft_printf("ra\n");
	}
}

void	rb(t_list **stack_b)
{
	if (*stack_b)
	{
		*stack_b = (*stack_b)->next;
		ft_printf("rb\n");
	}
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
	{
		if (*stack_b)
		{
			*stack_b = (*stack_b)->next;
			*stack_a = (*stack_a)->next;
			ft_printf("rr\n");
		}
	}
}
