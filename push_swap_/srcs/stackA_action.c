#include "../includes/lib.h"

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

void sa()
{
	if (!stack_a || !stack_a->next)
		return ;
	t_list *first;
	t_list *second;

	first = stack_a;
	stack_a = stack_a->next;
	second = stack_a;
	stack_a = stack_a->next;
	first->next = stack_a;
	second->next = first;
	stack_a = second;
}

void pb()
{
	if(stack_b)
	{
		t_list *toMove = stack_b;
		stack_b = stack_b->next;
		toMove->next = stack_a;
		stack_a = toMove;
	}
}

void pa()
{
	if(stack_a)
	{
		t_list *toMove = stack_a;
		stack_a = stack_a->next;
		toMove->next = stack_b;
		stack_b = toMove;
	}
}