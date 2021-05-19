/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:13 by ametta            #+#    #+#             */
/*   Updated: 2021/05/19 10:43:48 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		write(1, "Error", 5);
		return (1);
	}
	args_checker(argc, argv);
	ft_lstcreate(&stack_a, argv, argc);
	ft_printf("\nBEGINNIG:\t");
	ft_lstprint(stack_a);
	ft_printf("\n");
	ft_lstfree(stack_a);
	ft_lstfree(stack_b);
	return (0);
}

	// //			DEBUGGING
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

	// // 			DEBUGGING SB
	// pa();
	// pa();
	// pa();

	// printf("\nBEGINNING stack A:\t");
	// ft_lstprint(stack_a);
	// printf("BEGINNING stack B:\t");
	// ft_lstprint(stack_b);

	// ss();
	// printf("\nAFTER ss (stack A):\t");
	// ft_lstprint(stack_a);
	// printf("AFTER ss (stack B):\t");
	// ft_lstprint(stack_b);

	// rr();
	// printf("\nAFTER rr (stack A):\t");
	// ft_lstprint(stack_a);
	// printf("AFTER rr (stack B):\t");
	// ft_lstprint(stack_b);

	// rrr();
	// printf("\nAFTER rrr (stack A):\t");
	// ft_lstprint(stack_a);
	// printf("AFTER rrr (stack B):\t");
	// ft_lstprint(stack_b);
