#include "../includes/lib.h"

static int	control(t_list *stack_a)
{
	int		tmp;
	t_list	*check;

	check = stack_a;
	while (check && check->next)
	{
		tmp = check->data;
		check = check->next;
		if (tmp > check->data)
			return (1);
	}
	return (0);
}

static int find_middle(t_list **stack_a)
{
	long *array;
	t_list *lista;
	int stack_len;
	int i;
	int j;
	int temp;

	lista = *stack_a;
	stack_len = ft_lstlen(lista);
	array = malloc((stack_len + 1) * sizeof(long));
	i = 0;
	while (i < stack_len)
	{
		array[i++] = lista->data;
		lista = lista->next;
	}
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
	i = array[stack_len/2];
	free(array);
	return(i);
}

static void	sortOneHundred(t_list **stack_a, t_list **stack_b)
{
	int half;
	void *fist;

	fist = NULL;
	half = find_middle(stack_a);
	while (*stack_a)
	{
		if (fist == NULL)
			fist = (void*)(*stack_a)->data;
		else if ((int)fist == (*stack_a)->data)
			break;
		if ((*stack_a)->data < half)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
}

// static void	sortFiveHundred(t_list **stack_a, t_list **stack_b)
// {}

void	sorting(t_list **stack_a, t_list **stack_b)
{
	// if (ft_lstlen(*stack_a) <= 3 && control(*stack_a))
	// 	sortThree(stack_a);
	// else if (ft_lstlen(*stack_a) <= 5 && control(*stack_a))
	// 	sortFive(stack_a, stack_b);
	// if (ft_lstlen(*stack_a) <= 100)
		sortOneHundred(stack_a, stack_b);
	// else 
	// 	sortFiveHundred(stack_a, stack_b);
	if (!control(*stack_a))
		ft_printf("\nOK!\n");
	else
		ft_printf("\nKO\n");
}
