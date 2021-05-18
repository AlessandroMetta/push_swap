#include "../../sorting_program/includes/lib.h"

void rra()
{
	if (stack_a && ft_lstlen(stack_a) > 1)
	{
		t_list *last;
		t_list *penult;

		last = stack_a;
		while (last->next)
		{
			penult = last;
			last = last->next;
		}
		penult->next = NULL;
		last->next = stack_a;
		stack_a = last;
	}
}

void rrb()
{
	if (stack_b && ft_lstlen(stack_b) > 1)
	{
		t_list *last;
		t_list *penult;

		last = stack_b;
		while (last->next)
		{
			penult = last;
			last = last->next;
		}
		penult->next = NULL;
		last->next = stack_b;
		stack_b = last;
	}
}

void rrr()
{
	rra();
	rrb();
}