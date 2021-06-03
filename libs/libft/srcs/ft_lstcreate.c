/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcreate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:58:40 by ametta            #+#    #+#             */
/*   Updated: 2021/06/03 15:33:25 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	control(t_list **lista, int num)
{
	t_list	*last;

	last = *lista;
	while (last)
	{
		if (last->data == num)
			error_message();
		last = last->next;
	}
	ft_lstadd_back(lista, ft_lstnew(num));
}

static void	ft_free(char **values)
{
	int	i;

	i = 0;
	while (values[i])
		free(values[i++]);
	if (values)
		free(values);
}

void	ft_lstcreate(t_list **lista, char **values, int numVal)
{
	int	i;

	i = 0;
	if (numVal == 2)
	{
		values = ft_split(values[1], ' ');
		while (values[i])
			control(lista, ft_atoi(values[i++]));
		ft_free(values);
	}
	else
	{
		while (values[++i])
			control(lista, ft_atoi(values[i]));
	}
}
