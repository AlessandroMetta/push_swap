/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:58:33 by ametta            #+#    #+#             */
/*   Updated: 2021/05/20 17:48:27 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isspace(const char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\r' || c == '\n'
		|| c == '\f')
		return (1);
	return (0);
}
