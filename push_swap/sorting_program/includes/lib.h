/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:08 by ametta            #+#    #+#             */
/*   Updated: 2021/07/05 15:47:40 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include "../../libft/includes/libft.h"
# include "../../stack_action/includes/lib_push_swap.h"

void	args_checker(char **argv);
void	sorting(t_list **stack_a, t_list **stack_b);

void	sortThree(t_list **stack_a);
void	sortFive(t_list **stack_a, t_list **stack_b);
void	sortOneHundred(t_list **stack_a, t_list **stack_b);
void	sortFiveHundred(t_list **stack_a, t_list **stack_b);

void	sortingArray(int *array, int i);
void	searchStackHeads(t_list *lista, int *smallestPos, int *highestPos);
void	rotateStakA(t_list **stack_a, t_list **stack_b, int i, int len);
void	pushToStackA(t_list **stack_a, t_list **stack_b);
int		searchForBiggerThanSomething(t_list *stack, int something);
void	sortBetween(t_list **stack_a, t_list **stack_b, int lowest, int high);
void	splitStacksBetweenSomething(t_list **stack_a, t_list **stack_b,
			int min, int something);

#endif