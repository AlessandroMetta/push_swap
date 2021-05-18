#include "../includes/libft.h"

void ft_lstcreate(t_list **lista, char **values, int numVal)
{
	int i = 0;
	if (numVal == 2)
	{
		values = ft_split(values[1], ' ');
		while(values[i])
			ft_lstadd_back(lista, ft_lstnew((void *)(intptr_t)atoi(values[i++])));
		while(values[--i])
			free(values[i]);
		free(values);
	}
	else
		while(values[++i])
			ft_lstadd_back(lista, ft_lstnew((void *)(intptr_t)atoi(values[i])));
}