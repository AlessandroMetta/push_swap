#include "../../sorting_program/includes/lib.h"

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