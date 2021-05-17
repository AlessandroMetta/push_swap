#include "../includes/lib.h"

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