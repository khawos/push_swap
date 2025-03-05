/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 02:19:40 by amedenec          #+#    #+#             */
/*   Updated: 2025/02/03 02:19:42 by amedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3_number(t_stack_node **a)
{
	if ((*a)->value > (*a)->next->value
		&& (*a)->next->value > (*a)->next->next->value)
	{
		sa(a);
		rra(a);
	}
	else if ((*a)->value < (*a)->next->next->value
		&& (*a)->next->next->value < (*a)->next->value)
	{
		rra(a);
		sa(a);
	}
	else if ((*a)->value > (*a)->next->value
		&& (*a)->value < (*a)->next->next->value)
		sa(a);
	else if ((*a)->value > (*a)->next->value
		&& (*a)->next->next->value > (*a)->next->value)
		ra(a);
	else if ((*a)->value < (*a)->next->value
		&& (*a)->value > (*a)->next->next->value)
		rra(a);
}
