#include "../includes/libft.h"

void ft_lstcreate(t_list **lista, char **values)
{
	int i = 0;
	while(values[++i])
		ft_lstadd_back(lista, ft_lstnew((void *)(intptr_t)ft_atoi(values[i])));
}