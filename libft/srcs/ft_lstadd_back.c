/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:50:23 by ametta            #+#    #+#             */
/*   Updated: 2021/06/09 09:50:23 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		(*lst)->next = new;
		(*lst)->prec = new;
		return ;
	}
	last = *lst;
	while (last->next != *lst)
		last = last->next;
	if (new)
	{
		last->next = new;
		new->prec = last;
		(*lst)->prec = new;
		new->next = (*lst);
	}
}
