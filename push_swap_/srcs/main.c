#include "../includes/lib.h"

int main(int argc, char **argv)
{
	if (argc <= 1)
		return 1;
	ft_lstcreate(&stack_a, argv);

	rrb();

	// //			DEBUGGING
	// printf("\nBEGINNIG:\t");
	// ft_lstprint(stack_a);
	// printf("\nsize of stack A: %d\n", ft_lstlen(stack_a));

	// // 			DEBUGGING RA
	// ra();
	// printf("\nAFTER ra:\t");
	// ft_lstprint(stack_a);

	// // 			DEBUGGING RRA
	// rra();
	// printf("\nAFTER rra:\t");
	// ft_lstprint(stack_a);

	// // 			DEBUGGING SA
	// sa();
	// printf("\nAFTER sa:\t");
	// ft_lstprint(stack_a);	// per stampare la lista

	// // 			DEBUGGING PA
	// pa();
	// printf("\nAFTER pa:\n");
	// printf("stack A:\t");
	// ft_lstprint(stack_a);
	// printf("stack B:\t");
	// ft_lstprint(stack_b);

	// //			DEBUGGING PB
	// pb();
	// printf("\nAFTER pb:\n");
	// printf("stack A:\t");
	// ft_lstprint(stack_a);
	// printf("stack B:\t");
	// ft_lstprint(stack_b);

	// pa();
	// pa();
	// pa();
	// pa();
	// pa();
	// pa();
	// pa();
	// pa();
	// pa();
	// pa();
	// // 			DEBUGGING RB
	// rb();
	// printf("\n\nAFTER rb:\t");
	// ft_lstprint(stack_b);

	// // 			DEBUGGING RRB
	// rrb();
	// printf("\nAFTER rrb:\t");
	// ft_lstprint(stack_b);

	// // 			DEBUGGING SB
	// sb();
	// printf("\nAFTER sb:\t");
	// ft_lstprint(stack_b);

	printf("\n");
	ft_lstfree(stack_a);	// questa ci deve essere sempre
	ft_lstfree(stack_b);
	return 0;
}