/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:48:38 by amedenec          #+#    #+#             */
/*   Updated: 2025/01/02 17:48:39 by amedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define  PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					value;
	int					index;
	struct s_stack_node	*next;
}		t_stack_node;

// strlen

int				ft_strlen(char *str);

// split
char			**ft_split(char const *s, char c);

// ft_strcmp
int				ft_strcmp(const char *s1, const char *s2);

// atol
long			ft_atol(const char *str);

// init
int				init_stack(t_stack_node **a, char **argv, int NaN);

// stack_utils
int				add(t_stack_node **a, long nombre);
int				count_node(t_stack_node *a);
int				is_not_sorted(t_stack_node *a);
t_stack_node	*find_last_node(t_stack_node *a);
t_stack_node	*find_penultimate_node(t_stack_node *a);

// rotate
void			rotate(t_stack_node **stack);
void			revers_rotate(t_stack_node **stack);

// swap
void			swap(t_stack_node **stack);

// push
void			push(t_stack_node **stack1, t_stack_node **stack2);

// instructions1
void			sa(t_stack_node **a);
void			sb(t_stack_node **b);
void			ss(t_stack_node **a, t_stack_node **b);
void			pa(t_stack_node **b, t_stack_node **a);
void			pb(t_stack_node **a, t_stack_node **b);

// intructions2
void			ra(t_stack_node **a);
void			rb(t_stack_node **b);
void			rr(t_stack_node **a, t_stack_node **b);

// instuctions3
void			rra(t_stack_node **a);
void			rrb(t_stack_node **b);
void			rrr(t_stack_node **a, t_stack_node **b);

// check_error
int				check_error(char **argv, int bo);
int				invalid_caracter(char **argv, int bo);
int				repete_numbers(char **argv, int bo);
int				invalid_caracter_sign(char **argv, int bo);
int				invalide_number(char **argv, int bo);

// sort
void			sort(t_stack_node **a, t_stack_node **b);
void			sort_five_or_less(t_stack_node **a, t_stack_node **b);
int				get_smallest_position(t_stack_node *a);
void			push_smallest_to_b(t_stack_node **a, t_stack_node **b);

// radix
void			radix_sort(t_stack_node **a, t_stack_node **b);
void			give_index(t_stack_node *stack);
int				get_max_bits(t_stack_node *a);
void			push_bit_zero(t_stack_node **a, t_stack_node **b, int bit);

// sort_3_number
void			sort_3_number(t_stack_node **a);

// clear stack
void			clear_stack(t_stack_node *a, t_stack_node *b);
#endif
