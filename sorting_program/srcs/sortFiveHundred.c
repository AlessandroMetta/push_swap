/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortFiveHundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:55:19 by ametta            #+#    #+#             */
/*   Updated: 2021/06/09 10:13:58 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

static void	findEleventh(t_list *stack, int *range)
{
	long	*array;
	int		stack_len;
	int		i;

	stack_len = ft_lstlen(stack);
	array = malloc((stack_len + 1) * sizeof(long));
	allocation_checker((void *)array);
	i = -1;
	while (++i < stack_len)
	{
		array[i] = stack->data;
		stack = stack->next;
	}
	sortingArray(array, i);
	i = -1;
	while (++i < 6)
		range[i] = array[stack_len * i / 5];
	free(array);
}

void	sortFiveHundred(t_list **stack_a, t_list **stack_b)
{
	int	*range;
	int	i;

	i = 0;
	range = malloc(sizeof(int) * 6);
	allocation_checker((void *)range);
	findEleventh(*stack_a, range);
	splitStacksBetweenSomething(stack_a, stack_b, range[i], range[i + 1]);
	pushToStackA(stack_a, stack_b);
	while ((*stack_a)->data <= range[i + 1])
		ra(stack_a);
	while (++i < 3)
		sortBetween(stack_a, stack_b, range[i], range[i + 1]);
	splitStacksBetweenSomething(stack_a, stack_b, range[i], range[i + 1]);
	while (ft_lstlast(*stack_a)->data > range[i])
		rra(stack_a);
	pushToStackA(stack_a, stack_b);
	while ((*stack_a)->data <= range[i + 1])
		ra(stack_a);
	i++;
	splitStacksBetweenSomething(stack_a, stack_b, range[i], range[i + 1]);
	pushToStackA(stack_a, stack_b);
	while ((*stack_a)->data > range[i])
		ra(stack_a);
	free(range);
}
