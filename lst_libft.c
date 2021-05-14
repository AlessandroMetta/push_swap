#include "lib.h"

t_list	*ft_lstnew(void *content)
{
	t_list *elem;

	if (!(elem = malloc(sizeof(t_list))))
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	if (new)
	{
		last->next = new;
		new->next = NULL;
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list *last;

	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}