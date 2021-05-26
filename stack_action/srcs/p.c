/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:19 by ametta            #+#    #+#             */
/*   Updated: 2021/05/26 11:10:12 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sorting_program/includes/lib.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*toMove;

	if (*stack_b)
	{
		toMove = *stack_b;
		*stack_b = (*stack_b)->next;
		if (stack_a)
			toMove->next = *stack_a;
		else
			toMove->next = NULL;
		*stack_a = toMove;
		ft_printf("pa\n");
	}
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*toMove;

	if (*stack_a)
	{
		toMove = *stack_a;
		*stack_a = (*stack_a)->next;
		if (*stack_b)
			toMove->next = *stack_b;
		else
			toMove->next = NULL;
		*stack_b = toMove;
		ft_printf("pb\n");
	}
}

