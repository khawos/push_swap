/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:49:04 by amedenec          #+#    #+#             */
/*   Updated: 2025/01/02 17:49:05 by amedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack_node **stack)
{
	t_stack_node	*tmp1;
	t_stack_node	*tmp2;
	t_stack_node	*tmp;

	if (!stack || !*stack)
		return ;
	if (count_node(*stack) == 1)
		return ;
	tmp1 = *stack;
	tmp2 = (*stack)->next;
	tmp = tmp2->next;
	tmp2->next = tmp1;
	tmp1->next = tmp;
	*stack = tmp2;
}
