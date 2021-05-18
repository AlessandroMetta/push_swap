#include "../../sorting_program/includes/lib.h"

void ra()
{
	if (stack_a && ft_lstlen(stack_a) > 1)
	{
		t_list *last;
		t_list *toMove;

		toMove = stack_a->next;
		last = ft_lstlast(stack_a);
		last->next = stack_a;
		last = last->next;
		last->next = NULL;
		stack_a = toMove;
	}
}

void rb()
{
	if (stack_b && ft_lstlen(stack_b) > 1)
	{
		t_list *last;
		t_list *toMove;

		toMove = stack_b->next;
		last = ft_lstlast(stack_b);
		last->next = stack_b;
		last = last->next;
		last->next = NULL;
		stack_b = toMove;
	}
}

void rr()
{
	ra();
	rb();
}