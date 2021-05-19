/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:58:59 by ametta            #+#    #+#             */
/*   Updated: 2021/05/19 09:59:00 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (!dst)
		return (0);
	ft_memccpy(dst, src, '\0', dstsize);
	if (dstsize > 0)
		dst[dstsize - 1] = '\0';
	return (ft_strlen(src));
}
