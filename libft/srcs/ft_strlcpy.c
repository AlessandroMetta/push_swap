/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:58:59 by ametta            #+#    #+#             */
/*   Updated: 2021/05/20 17:48:59 by ametta           ###   ########.fr       */
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
