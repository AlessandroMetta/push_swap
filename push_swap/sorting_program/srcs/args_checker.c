/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:55:47 by ametta            #+#    #+#             */
/*   Updated: 2021/06/09 09:55:47 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

void	args_checker(char **argv)
{
	int	i;
	int	j;

	j = 0;
	while (argv[++j])
	{
		i = -1;
		while (argv[j][++i])
			if (!ft_isspace(argv[j][i]) && !ft_isdigit(argv[j][i])
				&& argv[j][i] != '-' && argv[j][i] != '+')
				error_message();
	}
	if (i == 0)
		exit(0);
}
