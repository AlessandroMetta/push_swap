#include "lib.h"

void ft_lstfree(t_list *lst)
{
	t_list *this = lst;
	if (this->next)
		ft_lstfree(this->next);
	free(this);
}

void ft_lstprint(t_list *lst)
{
	t_list *last;

	last = lst;
	while (last->next)
	{
		printf("%d | ", (int)last->content);
		last = last->next;
	}
	printf("%d\n", (int)ft_lstlast(lst)->content);
}

void ft_lstcreate(t_list **lista, char **values)
{
	int i = 0;
	while(values[++i])
		ft_lstadd_back(lista, ft_lstnew((void *)(intptr_t)ft_atoi(values[i])));
}