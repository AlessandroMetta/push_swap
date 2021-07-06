/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:50:50 by ametta            #+#    #+#             */
/*   Updated: 2021/06/09 09:50:50 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstlen(t_list *lst)
{
	int		i;
	void	*lastNode;

	if (!lst)
		return (0);
	i = 1;
	lastNode = lst;
	while (lst->next != lastNode)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
