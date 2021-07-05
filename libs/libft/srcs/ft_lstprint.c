/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:50:59 by ametta            #+#    #+#             */
/*   Updated: 2021/06/09 09:51:29 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstprint(t_list *list)
{
	int	len;

	if (list)
	{
		len = ft_lstlen(list);
		while (len--)
		{
			ft_printf("%d  ", list->data);
			list = list->next;
		}
		ft_printf("\n");
	}
	else
		ft_printf("Empty\n");
}
