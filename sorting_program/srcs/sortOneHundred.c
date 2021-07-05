/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortOneHundred.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:57:35 by ametta            #+#    #+#             */
/*   Updated: 2021/07/05 12:12:18 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

void	splitStacksBetweenSomething(t_list **stack_a, t_list **stack_b,
									int min, int something)
{
	while (searchForBiggerThanSomething(*stack_a, something)
		&& (*stack_a)->data >= min)
	{
		if ((*stack_a)->data > something)
			ra(stack_a);
		else
		{
			pb(stack_a, stack_b);
			if ((min != -2147483648
					&& ((*stack_b)->data >= (something + min) / 2))
				|| (min == -2147483648 && (*stack_b)->data >= something / 2))
				rb(stack_b);
		}
	}
}

int	searchForBiggerThanSomething(t_list *stack, int something)
{
	int	stack_len;

	stack_len = ft_lstlen(stack);
	while (stack_len > 0)
	{
		if (stack->data <= something)
			return (1);
		stack = stack->next;
		stack_len--;
	}
	return (0);
}

static void	findFifths(t_list *stack, int *range)
{
	int	*array;
	int	stack_len;
	int	i;

	stack_len = ft_lstlen(stack);
	array = malloc(stack_len * sizeof(int));
	// allocation_checker((void **)array);
	i = -1;
	while (++i < stack_len)
	{
		array[i] = stack->data;
		stack = stack->next;
	}
	sortingArray(array, i);
	i = -1;
	while (++i < 4)
		range[i] = array[stack_len * i / 3];
	range[3] = array[stack_len-1];
	free(array);
}

void	sortOneHundred(t_list **stack_a, t_list **stack_b)
{
	int	*range;
	int	i;

	i = 0;
	range = malloc(sizeof(int) * 4);
	allocation_checker((void *)range);
	findFifths(*stack_a, range);
	splitStacksBetweenSomething(stack_a, stack_b, range[i], range[i + 1]);
	pushToStackA(stack_a, stack_b);
	while ((*stack_a)->data <= range[i + 1])
		ra(stack_a);
	while (++i < 2)
		sortBetween(stack_a, stack_b, range[i], range[i + 1]);
	splitStacksBetweenSomething(stack_a, stack_b, range[i], range[i + 1]);
	pushToStackA(stack_a, stack_b);
	while ((*stack_a)->data > range[i])
		ra(stack_a);
	free(range);
}
