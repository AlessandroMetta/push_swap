/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_tree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:55:27 by ametta            #+#    #+#             */
/*   Updated: 2021/06/01 11:03:26 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

void	sortThree(t_list **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->data;
	second = (*stack_a)->next->data;
	third = ft_lstlast(*stack_a)->data;
	if ((first > second && first < third && second < third)
		|| (first > second && first > third && second > third)
		|| (first < second && second > third && first < third))
	{
		sa(stack_a);
		first = (*stack_a)->data;
		second = (*stack_a)->next->data;
	}
	if (third < first && first < second)
		rra(stack_a);
	if (first > second && second < third)
		ra(stack_a);
}
