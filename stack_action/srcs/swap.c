/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:54:23 by ametta            #+#    #+#             */
/*   Updated: 2021/06/09 10:01:34 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sorting_program/includes/lib.h"

static void	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*last;

	first = *stack;
	second = (*stack)->next;
	third = (*stack)->next->next;
	last = (*stack)->prec;
	if (ft_lstlen(*stack) != 2)
	{
		third->prec = first;
		first->next = third;
		last->next = second;
		second->prec = last;
		first->prec = second;
		second->next = first;
	}
	*stack = second;
}

void	sa(t_list **stack_a)
{
	if (!*stack_a || (*stack_a)->next == *stack_a)
		return ;
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_list **stack_b)
{
	if (!*stack_b || (*stack_b)->next == *stack_b)
		return ;
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a || (*stack_a)->next != *stack_a)
	{
		if (*stack_b || (*stack_b)->next != *stack_b)
		{
			swap(stack_a);
			swap(stack_b);
			ft_printf("ss\n");
		}
	}
}
