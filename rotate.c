/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:48:46 by amedenec          #+#    #+#             */
/*   Updated: 2025/01/02 17:48:47 by amedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack_node **stack)
{
	t_stack_node	*last_node;
	t_stack_node	*tmp;

	if (!stack || !*stack)
		return ;
	if (count_node(*stack) == 1)
		return ;
	tmp = (*stack)->next;
	last_node = find_last_node(*stack);
	last_node->next = (*stack);
	(*stack)->next = NULL;
	*stack = tmp;
}

void	revers_rotate(t_stack_node **stack)
{	
	t_stack_node	*penultimate_node;
	t_stack_node	*last_node;

	if (!stack || !*stack)
		return ;
	if (count_node(*stack) == 1)
		return ;
	penultimate_node = find_penultimate_node(*stack);
	last_node = find_last_node(*stack);
	penultimate_node->next = NULL;
	last_node->next = (*stack);
	(*stack) = last_node;
}
