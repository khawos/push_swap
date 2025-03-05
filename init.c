/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:48:12 by amedenec          #+#    #+#             */
/*   Updated: 2025/01/02 17:48:31 by amedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stack(t_stack_node **a, char **argv, int NaN)
{
	int	i;

	i = 0 - NaN;
	while (argv[i])
	{
		if (add(a, ft_atol(argv[i])))
			return (1);
		i++;
	}
	return (0);
}
