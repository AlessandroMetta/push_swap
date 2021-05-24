/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:26:56 by ametta            #+#    #+#             */
/*   Updated: 2021/05/24 17:10:25 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

static int	control(void)
{
	int		tmp;
	t_list	*check;

	check = stack_a;
	while (check && check->next)
	{
		tmp = (int)check->content;
		check = check->next;
		if (tmp > (int)check->content)
			return (1);
	}
	return (0);
}

static int middle_value(t_list *stack)
{
	int midVal;
	int i;

	midVal = 0;
	i = 0;
	while (stack)
	{
		midVal += (int)stack->content;
		i++;
		stack = stack->next;
	}
	midVal /= i;
	return (midVal);
}

static int	pre_sorting()
{
	int	tmp;
	int	move_count;
	int midVal;
	int counter;

	counter = 0;
	tmp = 0;
	move_count = 1;
	midVal = middle_value(stack_a);
	int halfStack = ft_lstlen(stack_a)/2;
	while (stack_a && halfStack && (counter == 0 || (int)stack_a->content != tmp))
	{
		if ((int)stack_a->content < midVal)
		{
			if ((int)stack_b->content && (int)stack_a->content < (int)ft_lstlast(stack_b)->content)
			{
				pb();
				rb();
				(counter) += 2;
			}
			else
			{
				pb();
				(counter)++;
			}
			(counter)++;
			move_count = 0;
		}
		else
		{
			if (move_count == 0)
			{
				tmp = (int)stack_a->content;
				move_count++;
			}
			ra();
			(counter)++;
			move_count++;
		}
		halfStack--;
	}
	return (counter);
}

static void	final_sorting(int *counter)
{
	// ft_printf("_____________________________\n");
	// ft_printf("problems here\n");
	if (stack_b)
	{
		if (!stack_a)
		{
			pa();
			*counter += 1;
			final_sorting(counter);
		}
		else if ((int)stack_b->content < (int)(stack_a)->content)
		{
			pa();
			(*counter)++;
			// ft_printf("_____________________________\n");
			// ft_printf("after finalsorting\n");
			// ft_printf("stack a: \t");
			// ft_lstprint(stack_a);
			// ft_printf("stack b: \t");
			// ft_lstprint(stack_b);
			// ft_printf("value of counter: %d\n", *counter);
			// final_sorting(counter);
		}
		else
		{
			pb();
			sb();
			// ft_printf("_____________________________\n");
			// ft_printf("after finalsorting\n");
			// ft_printf("stack a: \t");
			// ft_lstprint(stack_a);
			// ft_printf("stack b: \t");
			// ft_lstprint(stack_b);
			// ft_printf("value of counter: %d\n", *counter);
		}
	}
}

void sorting(void)
{
	int	counter;

	counter = 0;
	// while (control())
	// {
	// 	while (control())
	// 		counter += pre_sorting();
		// ft_printf("_____________________________\n");
		// ft_printf("after presorting\n");
		// ft_printf("stack a: \t");
		// ft_lstprint(stack_a);
		// ft_printf("stack b: \t");
		// ft_lstprint(stack_b);
		// ft_printf("value of counter: %d\n", counter);
	// 	while (stack_b){
	// 		final_sorting(&counter);
	// 	}
	// }
	while (control())
		counter += pre_sorting();
	ft_printf("stack a: \t");
	ft_lstprint(stack_a);
	ft_printf("stack b: \t");
	ft_lstprint(stack_b);
	ft_printf("-----parziale: %d moves\n", counter);
	while (stack_b)
		final_sorting(&counter);

	// ft_printf("stack a: \t");
	// ft_lstprint(stack_a);
	// ft_printf("stack b: \t");
	// ft_lstprint(stack_b);
	if (control())
		ft_printf("-----not sorted\n");
	else
		ft_printf("-----The algoritm takes: %d moves\n", counter);
}

// 2 12 17 19 9 11 0 7
