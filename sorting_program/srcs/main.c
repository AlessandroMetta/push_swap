/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:13 by ametta            #+#    #+#             */
/*   Updated: 2021/06/04 18:48:43 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc <= 1 || (argc == 2 && !*argv[1]))
		return(0);
	args_checker(argv);
	ft_lstcreate(&stack_a, argv, argc);
	sorting(&stack_a, &stack_b);
	ft_printf("\n-----At the End\t");
	ft_lstprint(stack_a);
	ft_lstfree(stack_a);
	ft_lstfree(stack_b);
	return (0);
}
