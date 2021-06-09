/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:59:32 by ametta            #+#    #+#             */
/*   Updated: 2021/06/09 10:00:02 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

void	sortingArray(long *array, long i)
{
	int		j;
	long	temp;

	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (array[j] > array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			j++;
		}
		i--;
	}
}

void	searchStackHeads(t_list *lista, int *smallestPos, int *highestPos)
{
	int	i;
	int	smallestValue;
	int	highestValue;

	i = ft_lstlen(lista);
	*smallestPos = 0;
	*highestPos = 0;
	smallestValue = lista->data;
	highestValue = lista->data;
	lista = lista->next;
	while (i-- > 0)
	{
		if (lista->data < smallestValue)
		{
			smallestValue = lista->data;
			*smallestPos = (ft_lstlen(lista) - i);
		}
		if (lista->data > highestValue)
		{
			highestValue = lista->data;
			*highestPos = (ft_lstlen(lista) - i);
		}
		lista = lista->next;
	}
}

void	sortBetween(t_list **stack_a, t_list **stack_b, int lowest, int high)
{
	splitStacksBetweenSomething(stack_a, stack_b, lowest, high);
	while ((*stack_a)->data <= lowest)
		ra(stack_a);
	pushToStackA(stack_a, stack_b);
	while ((*stack_a)->data <= high)
		ra(stack_a);
}

void	rotateStakA(t_list **stack_a, t_list **stack_b, int i, int len)
{
	if (len / 2 < i)
	{
		i = len - i;
		while (i-- > 0)
			rrb(stack_b);
	}
	else
		while (i-- > 0)
			rb(stack_b);
	pa(stack_a, stack_b);
}

void	pushToStackA(t_list **stack_a, t_list **stack_b)
{
	int	smallestPos;
	int	highestPos;
	int	len;

	len = ft_lstlen(*stack_b);
	while (len > 0)
	{
		searchStackHeads(*stack_b, &smallestPos, &highestPos);
		if (((len / 2 > smallestPos) && (((len / 2 > highestPos)
						&& (highestPos > smallestPos))
					|| ((len / 2 < highestPos)
						&& (len - highestPos + 1) > smallestPos)))
			|| ((len / 2 < highestPos && len / 2 < smallestPos)
				&& ((len - highestPos) > (len - smallestPos))))
		{
			rotateStakA(stack_a, stack_b, smallestPos, len);
			ra(stack_a);
		}
		else
			rotateStakA(stack_a, stack_b, highestPos, len);
		len = ft_lstlen(*stack_b);
	}
}
