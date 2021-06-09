/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocation_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:08:56 by ametta            #+#    #+#             */
/*   Updated: 2021/06/09 10:17:18 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	allocation_checker(void *something)
{
	if (!something)
	{
		ft_printf("Allocation Failure\n");
		exit(EXIT_FAILURE);
	}
}
