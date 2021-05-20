/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:08:40 by ametta            #+#    #+#             */
/*   Updated: 2021/05/20 17:47:45 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_chr(va_list arg, t_specs *specs, int *printed)
{
	char	chr;
	int		i;

	i = 0;
	chr = va_arg(arg, int);
	if (specs->minus)
		write(1, &chr, 1);
	while (i < specs->width - 1)
	{
		write(1, " ", 1);
		i++;
		(*printed)++;
	}
	if (!specs->minus)
		write(1, &chr, 1);
	(*printed)++;
}
