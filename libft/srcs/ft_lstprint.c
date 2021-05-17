#include "../includes/libft.h"

void ft_lstprint(t_list *lst)
{
	if (lst != NULL)
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
}