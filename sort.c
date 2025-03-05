/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:45:42 by amedenec          #+#    #+#             */
/*   Updated: 2025/01/13 10:45:44 by amedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_five_or_less(t_stack_node **a, t_stack_node **b)
{
	int	size;

	size = count_node(*a);
	if (size == 2 && (*a)->value > (*a)->next->value)
		sa(a);
	else if (size == 3)
		sort_3_number(a);
	else
	{
		while (count_node(*a) > 3)
			push_smallest_to_b(a, b);
		sort_3_number(a);
		while (*b)
			pa(b, a);
	}
}

int	get_smallest_position(t_stack_node *a)
{
	t_stack_node	*cur;
	int				pos;
	int				min;
	int				i;

	cur = a;
	min = cur->value;
	pos = 0;
	i = 0;
	while (cur)
	{
		if (cur->value < min)
		{
			min = cur->value;
			pos = i;
		}
		cur = cur->next;
		i++;
	}
	return (pos);
}

static void	double_ra(t_stack_node **a)
{
	ra(a);
	ra(a);
}

void	push_smallest_to_b(t_stack_node **a, t_stack_node **b)
{
	int	pos;
	int	size;

	size = count_node(*a);
	pos = get_smallest_position(*a);
	if (pos == 0)
	{
		pb(a, b);
		return ;
	}
	else if (pos == 1)
		ra(a);
	else if (pos == 2)
		double_ra(a);
	else if (pos == 3 && size == 4)
		rra(a);
	else if (pos == 3 && size == 5)
	{
		rra(a);
		rra(a);
	}
	else
		rra(a);
	pb(a, b);
}

void	sort(t_stack_node **a, t_stack_node **b)
{
	int	size;

	size = count_node(*a);
	if (size <= 5)
		sort_five_or_less(a, b);
	else
	{
		give_index(*a);
		radix_sort(a, b);
	}
}
