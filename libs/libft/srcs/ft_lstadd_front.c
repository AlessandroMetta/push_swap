/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:50:29 by ametta            #+#    #+#             */
/*   Updated: 2021/06/09 09:50:29 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		new->next = new;
		new->prec = new;
		return ;
	}
	new->prec = (*lst)->prec;
	new->next = (*lst);
	((*lst)->prec)->next = new;
	(*lst)->prec = new;
	(*lst) = new;
}
