/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:40:20 by ametta            #+#    #+#             */
/*   Updated: 2021/07/05 15:54:40 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

static int	control(t_list *stack_a)
{
	int	tmp;
	int	len;

	len = ft_lstlen(stack_a);
	while (--len)
	{
		tmp = stack_a->data;
		stack_a = stack_a->next;
		if (tmp > stack_a->data)
			return (1);
	}
	return (0);
}

void	sorting(t_list **stack_a, t_list **stack_b)
{
	if (!control(*stack_a))
		return ;
	if (ft_lstlen(*stack_a) <= 3)
		sortThree(stack_a);
	else if (ft_lstlen(*stack_a) <= 5)
		sortFive(stack_a, stack_b);
	else if (ft_lstlen(*stack_a) <= 100)
		sortOneHundred(stack_a, stack_b);
	else
		sortFiveHundred(stack_a, stack_b);
}
