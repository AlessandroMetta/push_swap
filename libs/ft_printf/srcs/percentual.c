/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percentual.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:09:02 by ametta            #+#    #+#             */
/*   Updated: 2021/05/19 12:10:26 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_prc(int *printed, t_specs *specs)
{
	if (!specs->minus && specs->zero)
		(*printed) += fill('0', specs->width - 1);
	if (!specs->minus && !specs->zero)
		(*printed) += fill(' ', specs->width - 1);
	write(1, "%", 1);
	(*printed)++;
	if (specs->minus)
		(*printed) += fill(' ', specs->width - 1);
}
