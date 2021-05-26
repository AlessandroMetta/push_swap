/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:21 by ametta            #+#    #+#             */
/*   Updated: 2021/05/26 11:11:00 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sorting_program/includes/lib.h"

void	ra(t_list **stack_a)
{
	t_list	*last;
	t_list	*toMove;

	if (*stack_a && ft_lstlen(*stack_a) > 1)
	{
		toMove = (*stack_a)->next;
		last = ft_lstlast(*stack_a);
		last->next = *stack_a;
		last = last->next;
		last->next = NULL;
		*stack_a = toMove;
		ft_printf("ra\n");
	}
}

void	rb(t_list **stack_b)
{
	t_list	*last;
	t_list	*toMove;

	if (*stack_b && ft_lstlen(*stack_b) > 1)
	{
		toMove = (*stack_b)->next;
		last = ft_lstlast(*stack_b);
		last->next = *stack_b;
		last = last->next;
		last->next = NULL;
		*stack_b = toMove;
		ft_printf("rb\n");
	}
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_printf("rr\n");
}
