/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:19 by ametta            #+#    #+#             */
/*   Updated: 2021/07/05 09:17:34 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sorting_program/includes/lib.h"

static void	removeFirstNode(t_list **stack)
{
	if ((*stack)->next == *stack && (*stack)->prec == *stack)
		(*stack) = NULL;
	else
	{
		((*stack)->prec)->next = (*stack)->next;
		((*stack)->next)->prec = (*stack)->prec;
		*stack = (*stack)->next;
	}
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*toMove;

	if (*stack_b)
	{
		toMove = *stack_b;
		removeFirstNode(stack_b);
		ft_lstadd_front(stack_a, toMove);
		ft_putendl("pa");
	}
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*toMove;

	if (*stack_a)
	{
		toMove = *stack_a;
		removeFirstNode(stack_a);
		ft_lstadd_front(stack_b, toMove);
		ft_putendl("pb");
	}
}
