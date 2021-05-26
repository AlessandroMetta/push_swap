#include "../includes/lib.h"

static void	sortThree(t_list **stack_a)
{
	int		tmp;
	t_list	*list;

	list = *stack_a;
	tmp = list->data;
	list = list->next;
	while ((tmp < list->data && list->data > ft_lstlast(list)->data)
		|| (tmp > list->data && tmp > ft_lstlast(list)->data))
	{
		ra(stack_a);
		tmp = list->data;
		list = list->next;
	}
	if (tmp > list->data)
	{
		tmp = list->data;
		sa(stack_a);
		list = list->next;
	}
}

static void	sortFive(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstlen(*stack_a) > 3)
	{
		if ((*stack_a)->data > (*stack_a)->next->data)
			sa(stack_a);
		pb(stack_a, stack_b);
	}
	sortThree(stack_a);
	while (*stack_b){
		pa(stack_a, stack_b);
		sortThree(stack_a);
	}
}

// static void	sortOneHundred(t_list **stack_a, t_list **stack_b)
// {}

// static void	sortFiveHundred(t_list **stack_a, t_list **stack_b)
// {}

void	sorting(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstlen(*stack_a) <= 3)
		sortThree(stack_a);
	else if (ft_lstlen(*stack_a) <= 5)
		sortFive(stack_a, stack_b);
	// if (ft_lstlen(*stack_a) <= 100)
	// 	sortOneHundred(stack_a, stack_b);
	// else 
	// 	sortFiveHundred(stack_a, stack_b);
}
