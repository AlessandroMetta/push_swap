/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:26 by ametta            #+#    #+#             */
/*   Updated: 2021/05/20 09:55:39 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sorting_program/includes/lib.h"

void	sa(void)
{
	t_list	*first;
	t_list	*second;

	if (!stack_a || !stack_a->next)
		return ;
	first = stack_a;
	stack_a = stack_a->next;
	second = stack_a;
	stack_a = stack_a->next;
	first->next = stack_a;
	second->next = first;
	stack_a = second;
}

void	sb(void)
{
	t_list	*first;
	t_list	*second;

	if (!stack_b || !stack_b->next)
		return ;
	first = stack_b;
	stack_b = stack_b->next;
	second = stack_b;
	stack_b = stack_b->next;
	first->next = stack_b;
	second->next = first;
	stack_b = second;
}

void	ss(void)
{
	sa();
	sb();
}
