#include "../../sorting_program/includes/lib.h"

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

void sb()
{
	if (!stack_b || !stack_b->next)
		return ;
	t_list *first;
	t_list *second;

	first = stack_b;
	stack_b = stack_b->next;
	second = stack_b;
	stack_b = stack_b->next;
	first->next = stack_b;
	second->next = first;
	stack_b = second;
}

void ss()
{
	sa();
	sb();
}
