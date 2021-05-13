#include <stdio.h>
#include "libft.h"


int main(int argc, char **argv)
{
	t_list *lista;
	int i = 1;
	while(argv[i])
	{
		ft_lstadd_back(&lista, ft_lstnew((void *)ft_atoi(argv[i])));
		printf("%d | ", (int)ft_lstlast(lista)->content);
		i++;
	}
	printf("\n");
	ft_lstfree(lista);
	return 0;
}