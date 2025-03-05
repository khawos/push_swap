/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:48:55 by amedenec          #+#    #+#             */
/*   Updated: 2025/02/03 01:25:08 by amedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_last_node(t_stack_node *a)
{
	if (!a)
		return (NULL);
	while (a && a->next)
		a = a->next;
	return (a);
}

t_stack_node	*find_penultimate_node(t_stack_node *a)
{
	if (!a)
		return (NULL);
	while (a && a->next && a->next->next)
		a = a->next;
	return (a);
}

int	count_node(t_stack_node *a)
{
	int	i;

	i = 0;
	if (!a)
		return (0);
	while (a && a->next)
	{
		a = a->next;
		i++;
	}
	return (i + 1);
}

int	add(t_stack_node **a, long nombre)
{
	t_stack_node	*new_node;
	t_stack_node	*last_node;

	if (a == NULL)
		return (1);
	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		return (1);
	new_node->next = NULL;
	new_node->value = nombre;
	if (*a == NULL)
		*a = new_node;
	else
	{
		last_node = find_last_node(*a);
		last_node->next = new_node;
	}
	return (0);
}

int	is_not_sorted(t_stack_node *a)
{
	while (a && a->next)
	{
		if (a->value > a->next->value)
			return (1);
		a = a->next;
	}
	return (0);
}
