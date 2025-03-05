/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 08:56:03 by amedenec          #+#    #+#             */
/*   Updated: 2025/01/07 08:56:06 by amedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_error(char **argv, int bo)
{
	if (invalid_caracter(argv, bo)
		|| repete_numbers(argv, bo)
		|| invalid_caracter_sign(argv, bo)
		|| invalide_number(argv, bo))
		return (1);
	return (0);
}

int	invalid_caracter(char **argv, int bo)
{
	int	i;
	int	j;
	int	repeat_sign;

	i = 1 - bo;
	while (argv[i])
	{
		j = 0;
		repeat_sign = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-' || argv[i][j] == '+')
				repeat_sign++;
			if (repeat_sign >= 2)
				return (1);
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9')
			&& !(argv[i][j] == '-' || argv[i][j] == '+' || argv[i][j] == ' '))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	invalid_caracter_sign(char **argv, int bo)
{
	int	i;
	int	j;

	i = 1 - bo;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= '0' && argv[i][j] <= '9')
			&& (argv[i][j + 1] == '-' || argv[i][j + 1] == '+'))
				return (1);
			if (((argv[i][j] == '-' || argv[i][j] == '+')
			&& (argv[i][j + 1] == '\0'))
			|| ((argv[i][j + 1] == '-' || argv[i][j + 1] == '+')
			&& (argv[i][j] <= '9' || argv[i][j] >= '0')))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	repete_numbers(char **argv, int bo)
{
	int	i;
	int	j;

	i = 1 - bo;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	invalide_number(char **argv, int bo)
{
	int	i;

	i = 1 - bo;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) > 10)
			return (1);
		if (ft_atol(argv[i]) >= 2147483648)
			return (1);
		i++;
	}
	return (0);
}
