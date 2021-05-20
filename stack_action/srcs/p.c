/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:19 by ametta            #+#    #+#             */
/*   Updated: 2021/05/20 17:49:39 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sorting_program/includes/lib.h"

void	pb(void)
{
	t_list	*toMove;

	if (stack_a)
	{
		toMove = stack_a;
		stack_a = stack_a->next;
		if (stack_b)
			toMove->next = stack_b;
		else
			toMove->next = NULL;
		stack_b = toMove;
	}
}

void	pa(void)
{
	t_list	*toMove;

	if (stack_b)
	{
		toMove = stack_b;
		stack_b = stack_b->next;
		if (stack_a)
			toMove->next = stack_a;
		else
			toMove->next = NULL;
		stack_a = toMove;
	}
}
