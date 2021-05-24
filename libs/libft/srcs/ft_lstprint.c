/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:58:51 by ametta            #+#    #+#             */
/*   Updated: 2021/05/24 10:33:10 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstprint(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
		{
			ft_printf("%d | ", (int)lst->content);
			lst = lst->next;
		}
		ft_printf("%d\n", (int)(lst)->content);
	}
	else
		ft_printf("Empty\n");
}
