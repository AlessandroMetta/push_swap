/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:58:51 by ametta            #+#    #+#             */
/*   Updated: 2021/05/26 12:18:19 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstprint(t_list *list)
{
	if (list)
	{
		while (list->next)
		{
			ft_printf("%d | ", list->data);
			list = list->next;
		}
		ft_printf("%d\n", (list)->data);
	}
	else
		ft_printf("Empty\n");
}
