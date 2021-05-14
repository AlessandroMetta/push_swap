#include "lib.h"

void ra(t_list **lst)
{
	t_list *last;
	t_list *toMove;

	toMove = (*lst)->next;
	last = ft_lstlast(*lst);
	last->next = *lst;
	last = last->next;
	last->next = NULL;
	*lst = toMove;
}

void rra(t_list **lst)
{
	t_list *last;
	t_list *penult;

	last = *lst;
	while (last->next)
	{
		penult = last;
		last = last->next;
	}
	penult->next = NULL;
	last->next = *lst;
	*lst = last;
}

void sa(t_list **lst)
{
	t_list *first;
	t_list *second;

	first = *lst;
	*lst = (*lst)->next;
	second = *lst;
	*lst = (*lst)->next;
	first->next = *lst;
	second->next = first;
	*lst = second;
}