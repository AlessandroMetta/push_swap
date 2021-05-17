#include "../includes/libft.h"

void ft_lstfree(t_list *lst)
{
	if (lst)
	{
		if (lst->next)
			ft_lstfree(lst->next);
		free(lst);
	}
}