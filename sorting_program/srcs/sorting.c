/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:26:56 by ametta            #+#    #+#             */
/*   Updated: 2021/05/19 18:31:30 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

static int control(void)
{
	int		tmp;
	t_list	*check;

	check = stack_a;
	while(check->next)
	{
		tmp = (int)check->content;
		check = check->next;
		if (tmp > (int)check->content)
			return (1);
	}
	return (0);
}

int sorting()
{
	int tmp;
	int counter;
	int boool;

	boool = 0;
	counter = 0;
	while (control())
	{
		tmp = 0;
		while (stack_a && (int)stack_a->content != tmp)
		{
			if (!stack_b || (int)stack_a->content > (int)ft_lstlast(stack_b)->content)
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
			counter++;
		}
		while (stack_b)
		{
			if (!stack_a)
			{
				pa();
				counter++;
			}
			else if ((int)stack_b->content > (int)ft_lstlast(stack_a)->content)
			{
				pa();
				ra();
				counter += 2;
			}
			else
			{
				rra();
				pb();
				rb();
				counter += 3;
			}
		}
	}
	return (counter);
}

// 2 12 17 19 9 11 0 7