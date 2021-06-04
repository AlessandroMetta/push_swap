#include "../includes/lib.h"

static void sortingArray(long *array, long i)
{
	int j;
	long temp;

	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (array[j] > array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			j++;
		}
		i--;
	}
}

int findMiddle(t_list **stack_a)
{
	long *array;
	t_list *lista;
	int stack_len;
	int i;

	lista = *stack_a;
	stack_len = ft_lstlen(lista);
	array = malloc((stack_len + 1) * sizeof(long));
	i = 0;
	while (i < stack_len)
	{
		array[i++] = lista->data;
		lista = lista->next;
	}
	sortingArray(array, i);
	i = array[stack_len/2];
	free(array);
	return(i);
}