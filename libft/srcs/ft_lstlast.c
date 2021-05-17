#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *last;

	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}