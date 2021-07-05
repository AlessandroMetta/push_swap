/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocation_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:08:56 by ametta            #+#    #+#             */
/*   Updated: 2021/07/05 15:51:55 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	allocation_checker(void *something)
{
	if (!something)
	{
		ft_putendl("Allocation Failure");
		exit(EXIT_FAILURE);
	}
}
