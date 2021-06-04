/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:08 by ametta            #+#    #+#             */
/*   Updated: 2021/06/04 10:41:54 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include "../../libs/libft/includes/libft.h"
# include "../../stack_action/includes/lib_push_swap.h"

void	args_checker(char **argv);
void	sorting(t_list **stack_a, t_list **stack_b);

void	sortThree(t_list **stack_a);
void	sortFive(t_list **stack_a, t_list **stack_b);
void	sortOneHundred(t_list **stack_a, t_list **stack_b);
void	sortFiveHundred(t_list **stack_a, t_list **stack_b);
int		findMiddle(t_list **stack_a);

#endif