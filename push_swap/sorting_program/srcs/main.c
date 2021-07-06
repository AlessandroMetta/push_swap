/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:55:40 by ametta            #+#    #+#             */
/*   Updated: 2021/06/09 09:56:12 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc <= 1)
		return (1);
	args_checker(argv);
	ft_lstcreate(&stack_a, argv, argc);
	sorting(&stack_a, &stack_b);
	if (stack_a)
		ft_lstfree(stack_a, stack_a->prec);
	if (stack_b)
		ft_lstfree(stack_b, stack_b->prec);
	return (0);
}
