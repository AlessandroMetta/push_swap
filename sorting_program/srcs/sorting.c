#include "../includes/lib.h"

// static int	control(t_list *stack_a)
// {
// 	int		tmp;
// 	t_list	*check;

// 	check = stack_a;
// 	while (check && check->next)
// 	{
// 		tmp = check->data;
// 		check = check->next;
// 		if (tmp > check->data)
// 			return (1);
// 	}
// 	return (0);
// }

void	sorting(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstlen(*stack_a) <= 3)
		sortThree(stack_a);
	else if (ft_lstlen(*stack_a) <= 5)
		sortFive(stack_a, stack_b);
	else if (ft_lstlen(*stack_a) <= 100)
		sortOneHundred(stack_a, stack_b);
	// else 
	// 	sortFiveHundred(stack_a, stack_b);
	// if (!control(*stack_a))
	// 	ft_printf("\nOK!\n");
	// else
	// 	ft_printf("\nKO\n");
}
