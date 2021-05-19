/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:24 by ametta            #+#    #+#             */
/*   Updated: 2021/05/19 09:59:25 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sorting_program/includes/lib.h"

void	rra(void)
{
	t_list	*last;
	t_list	*penult;

	if (stack_a && ft_lstlen(stack_a) > 1)
	{
		last = stack_a;
		while (last->next)
		{
			penult = last;
			last = last->next;
		}
		penult->next = NULL;
		last->next = stack_a;
		stack_a = last;
	}
}

void	rrb(void)
{
	t_list	*last;
	t_list	*penult;

	if (stack_b && ft_lstlen(stack_b) > 1)
	{
		last = stack_b;
		while (last->next)
		{
			penult = last;
			last = last->next;
		}
		penult->next = NULL;
		last->next = stack_b;
		stack_b = last;
	}
}

void	rrr(void)
{
	rra();
	rrb();
}
