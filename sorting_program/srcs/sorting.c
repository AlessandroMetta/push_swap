/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:26:56 by ametta            #+#    #+#             */
/*   Updated: 2021/05/20 17:58:05 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

static int	control(void)
{
	int		tmp;
	t_list	*check;

	check = stack_a;
	while (check->next)
	{
		tmp = (int)check->content;
		check = check->next;
		if (tmp > (int)check->content)
			return (1);
	}
	return (0);
}

static int max_value(t_list *stack)
{
	int max;

	max = (int)stack->content;
	while (stack->next)
	{
		stack = stack->next;
		if ((int)stack->content > max)
			max = (int)stack->content;
	}
	return (max);
}

static void	pre_sorting(int *counter)
{
	int	tmp;
	int	boool;
	int max;

	tmp = 0;
	boool = 0;
	max = max_value(stack_a) / 2;
	while (stack_a && (*counter == 0 || (int)stack_a->content != tmp))
	{
		if ((int)stack_a->content > max)
		{
			pb();
			boool = 1;
		}
		else
		{
			if (boool == 1)
			{
				tmp = (int)stack_a->content;
				boool = 0;
			}
			ra();
		}
		(*counter)++;
	}
}

static void	final_sorting(int *counter)
{
	if (stack_b)
	{
		if (!stack_a)
		{
			pa();
			*counter += 1;
			final_sorting(counter);
		}
		else if ((int)stack_b->content > (int)ft_lstlast(stack_a)->content)
		{
			pa();
			ra();
			*counter += 2;
			final_sorting(counter);
		}
		else
		{
			rra();
			pb();
			rb();
			if (stack_a)
				*counter -= 2;
			else
				*counter -= 1;
		}
	}
}

int sorting(void)
{
	int	counter;

	counter = 0;
	while (control())
	{
		pre_sorting(&counter);
		while (stack_b)
			final_sorting(&counter);
	}
	return (counter);
}

// 2 12 17 19 9 11 0 7
