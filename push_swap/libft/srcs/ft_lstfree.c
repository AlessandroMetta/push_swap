/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:50:39 by ametta            #+#    #+#             */
/*   Updated: 2021/06/09 09:50:39 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstfree(t_list *list, void *last)
{
	if (list)
	{
		if (list != last)
			ft_lstfree(list->next, last);
		free(list);
	}
}
