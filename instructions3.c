/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:44:02 by amedenec          #+#    #+#             */
/*   Updated: 2025/01/02 18:44:03 by amedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack_node **a)
{
	revers_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack_node **b)
{
	revers_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	revers_rotate(a);
	revers_rotate(b);
	write(1, "rrr\n", 4);
}
