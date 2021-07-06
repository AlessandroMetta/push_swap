#include "../includes/lib.h"

static void	putInCorrectPos(t_list **stack_a, t_list **stack_b, int pos)
{
	if (pos == 0 || pos == 1)
		pa(stack_a, stack_b);
	if (pos == 1)
		sa(stack_a);
	else if (pos == ft_lstlen(*stack_a) - 1)
	{
		rra(stack_a);
		pa(stack_a, stack_b);
		ra(stack_a);
		ra(stack_a);
	}
	else if (pos == ft_lstlen(*stack_a))
	{
		pa(stack_a, stack_b);
		ra(stack_a);
	}
	else if (pos != 0)
	{
		ra(stack_a);
		pa(stack_a, stack_b);
		sa(stack_a);
		rra(stack_a);
	}
}

static int	findPos(t_list *list, int elem)
{
	int	pos;
	int	len;

	pos = 0;
	len = ft_lstlen(list);
	while (len && elem > list->data)
	{
		list = list->next;
		pos++;
		len--;
	}
	return (pos);
}

void	sortFive(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstlen(*stack_a) > 3)
		pb(stack_a, stack_b);
	sortThree(stack_a);
	while (ft_lstlen(*stack_b) > 0)
		putInCorrectPos(stack_a, stack_b, findPos(*stack_a, (*stack_b)->data));
}
