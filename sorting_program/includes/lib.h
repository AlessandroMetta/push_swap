/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:08 by ametta            #+#    #+#             */
/*   Updated: 2021/05/24 11:19:26 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include "../../libs/libft/includes/libft.h"
# include "../../stack_action/includes/lib_push_swap.h"

t_list	*stack_a;
t_list	*stack_b;

void	args_checker(int argc, char **argv);
void		sorting(void);

#endif