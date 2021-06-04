#include "../includes/lib.h"

static void splitStacksBelowHalf(t_list **stack_a, t_list **stack_b, long half)
{
	void *fist;

	fist = NULL;
	while (*stack_a)
	{
		if ((*stack_a)->data <= half)
			pb(stack_a, stack_b);
		else
		{
			if (!fist)
				fist = *stack_a;
			else if (fist == *stack_a)
				break ;
			ra(stack_a);
		}
	}
}

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

static void splitStacksAboveHalf(t_list **stack_a, t_list **stack_b, long half)
{
	void *fist;

	fist = NULL;
	while (*stack_a)
	{
		if ((*stack_a)->data > half)
			pb(stack_a, stack_b);
		else
		{
			if (!fist)
				fist = *stack_a;
			else if (fist == *stack_a)
				break ;
			ra(stack_a);
		}
	}
}

void	sortOneHundred(t_list **stack_a, t_list **stack_b)
{
	int half;
	
	half = findMiddle(stack_a);
	splitStacksBelowHalf(stack_a, stack_b, half);
	pushToStackA(stack_a, stack_b);
	splitStacksAboveHalf(stack_a, stack_b, half);
	pushToStackA(stack_a, stack_b);
}