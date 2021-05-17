#include "../includes/libft.h"

int ft_lstlen(t_list *lst)
{
	int i = 1;

	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}