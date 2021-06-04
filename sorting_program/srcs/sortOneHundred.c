#include "../includes/lib.h"

static int findSmallest(t_list **stack_b)
{
	int i;
	int j;
	int smallest;
	t_list *lista;

	lista = *stack_b;
	i = 0;
	j = 0;
	smallest = lista->data;
	lista = lista->next;
	while (lista)
	{
		i++;
		if (lista->data < smallest)
		{
			smallest = lista->data;
			j += i;
			i = 0;
		}
		lista = lista->next;
	}
	return (j);
}

static void splitStacksBelowHalf(t_list **stack_a, t_list **stack_b)
{
	int smallestPos;
	int half_stack;

	half_stack = ft_lstlen(*stack_a)/2;
	while (*stack_a)
	{
		if (ft_lstlen(*stack_a) <= half_stack)
			break ;
		smallestPos = findSmallest(stack_a);
		if (ft_lstlen(*stack_a)/2 < smallestPos)
		{
			smallestPos = ft_lstlen(*stack_a) - smallestPos;
			while (smallestPos-- > 0)
				rra(stack_a);
		}
		else
			while (smallestPos-- > 0)
				ra(stack_a);
		pb(stack_a, stack_b);
		rb(stack_b);
	}
	// ft_printf("\n\n-----stack_a\t");
	// ft_lstprint(*stack_a);
	// ft_printf("\n\n-----stack_b\t");
	// ft_lstprint(*stack_b);
}

static void pushToStackA(t_list **stack_a, t_list **stack_b)
{
	int smallestPos;

	while (*stack_b)
	{
		smallestPos = findSmallest(stack_b);
		if (ft_lstlen(*stack_b)/2 < smallestPos)
		{
			smallestPos = ft_lstlen(*stack_b) - smallestPos;
			while (smallestPos-- > 0)
				rrb(stack_b);
		}
		else
			while (smallestPos-- > 0)
				rb(stack_b);
		pa(stack_a, stack_b);
		ra(stack_a);
	}
}

static void splitStacksAboveHalf(t_list **stack_a, t_list **stack_b)
{
	int half_stack;

	half_stack = ft_lstlen(*stack_a)/2;
	while (half_stack)
	{
		pb(stack_a, stack_b);
		half_stack--;
	}
}

void	sortOneHundred(t_list **stack_a, t_list **stack_b)
{
	int half;
	
	half = findMiddle(stack_a);
	splitStacksBelowHalf(stack_a, stack_b);
	pushToStackA(stack_a, stack_b);
	splitStacksAboveHalf(stack_a, stack_b);
	pushToStackA(stack_a, stack_b);
}