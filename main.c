/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 01:21:53 by amedenec          #+#    #+#             */
/*   Updated: 2025/02/03 01:21:55 by amedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (2 == argc && !argv[1][0]))
		return (0);
	else if (2 == argc)
		argv = ft_split(argv[1], ' ');
	if (check_error(argv, argc == 2))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (init_stack(&a, argv + 1, argc == 2))
	{
		clear_stack(a, b);
		return (1);
	}
	if (is_not_sorted(a))
		sort(&a, &b);
	clear_stack(a, b);
	return (0);
}

// cree un makefile,
// ce faire verifier par des amis
