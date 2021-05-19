/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:09:29 by ametta            #+#    #+#             */
/*   Updated: 2021/05/19 12:10:35 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_integer(va_list arg, t_specs *specs, int *print)
{
	char		*s;
	long int	nbr;
	int			len;

	nbr = va_arg(arg, int);
	s = ft_itoa_base((nbr < 0 ? -nbr : nbr), "0123456789");
	len = (nbr == 0 && specs->precis == 0 ? 0 : ft_strlen(s));
	specs->width -= (nbr < 0 ? 1 : 0);
	(*print) += (nbr < 0 ? (1 + len) : len);
	if (nbr < 0 && specs->zero && specs->precis == -1)
		write(1, "-", 1);
	if (!specs->minus && (specs->zero && specs->precis == -1))
		(*print) += fill('0', specs->width - len);
	if (!specs->minus && !(specs->zero && specs->precis == -1))
		(*print) += fill(' ', specs->width - max(specs->precis, len));
	if (nbr < 0 && !(specs->zero && specs->precis == -1))
		write(1, "-", 1);
	if (specs->precis != -1)
		(*print) += fill('0', specs->precis - len);
	if (!(nbr == 0 && specs->precis == 0))
		write(1, s, len);
	if (specs->minus)
		(*print) += fill(' ', specs->width - (specs->precis != -1 ?
		max(specs->precis, len) : len));
	free(s);
}
