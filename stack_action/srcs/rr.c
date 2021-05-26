/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:24 by ametta            #+#    #+#             */
/*   Updated: 2021/05/26 11:11:35 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sorting_program/includes/lib.h"

void	rra(t_list **stack_a)
{
	t_list	*last;
	t_list	*penult;

	if (*stack_a && ft_lstlen(*stack_a) > 1)
	{
		last = *stack_a;
		while (last->next)
		{
			penult = last;
			last = last->next;
		}
		penult->next = NULL;
		last->next = *stack_a;
		*stack_a = last;
		ft_printf("rra\n");
	}
}

void	rrb(t_list **stack_b)
{
	t_list	*last;
	t_list	*penult;

	if (*stack_b && ft_lstlen(*stack_b) > 1)
	{
		last = *stack_b;
		while (last->next)
		{
			penult = last;
			last = last->next;
		}
		penult->next = NULL;
		last->next = *stack_b;
		*stack_b = last;
		ft_printf("rrb\n");
	}
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_printf("rrr\n");
}
