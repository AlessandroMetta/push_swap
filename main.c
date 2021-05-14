#include "lib.h"

int main(int argc, char **argv)
{
	t_list *stack_a;
	ft_lstcreate(&stack_a, argv);
	printf("BEFORE:\t\t");
	ft_lstprint(stack_a);
	ra(&stack_a);
	printf("AFTER ra:\t");
	ft_lstprint(stack_a);
	rra(&stack_a);
	printf("AFTER rra:\t");
	ft_lstprint(stack_a);
	sa(&stack_a);
	printf("AFTER sa:\t");
	ft_lstprint(stack_a);
	ft_lstfree(stack_a);
	return 0;
}