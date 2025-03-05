/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:19:12 by amedenec          #+#    #+#             */
/*   Updated: 2025/02/03 01:22:23 by amedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_stack_node *a)
{
	int	max_bits;
	int	size;

	size = count_node(a);
	max_bits = 0;
	while ((size - 1) >> max_bits != 0)
		max_bits++;
	return (max_bits);
}

void	push_bit_zero(t_stack_node **a, t_stack_node **b, int bit)
{
	int				size;
	int				i;
	t_stack_node	*current;

	size = count_node(*a);
	i = 0;
	while (i < size)
	{
		current = *a;
		if (((current->index >> bit) & 1) == 0)
			pb(a, b);
		else
			ra(a);
		i++;
	}
}

void	radix_sort(t_stack_node **a, t_stack_node **b)
{
	int	max_bits;
	int	i;

	max_bits = get_max_bits(*a);
	i = 0;
	while (i < max_bits)
	{
		push_bit_zero(a, b, i);
		while (*b)
			pa(b, a);
		i++;
	}
}

void	give_index(t_stack_node *stack)
{
	t_stack_node	*current;
	t_stack_node	*temp;
	int				index;

	current = stack;
	while (current)
	{
		index = 0;
		temp = stack;
		while (temp)
		{
			if (temp->value < current->value)
				index++;
			temp = temp->next;
		}
		current->index = index;
		current = current->next;
	}
}
