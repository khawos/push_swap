/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:48:03 by amedenec          #+#    #+#             */
/*   Updated: 2025/02/03 01:24:44 by amedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	count_words(char const *s, char c)
{
	int	is_inside;
	int	n;

	n = 0;
	while (*s)
	{
		is_inside = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			if (is_inside == 0)
			{
					is_inside = 1;
					n++;
			}
			s++;
		}
	}
	return (n);
}

static int	safe_malloc(char **dest, int i, size_t len)
{
	dest[i] = malloc(len * sizeof(char));
	if (!dest[i])
	{
		while (i >= 0)
			free(dest[i--]);
		free(dest);
		return (1);
	}
	return (0);
}

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*start;

	start = dest;
	while (*src && n - 1)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (start);
}

static int	fill(char **dest, char const *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (safe_malloc(dest, i, len + 1))
				return (1);
			ft_strncpy(dest[i], s - len, len + 1);
			i++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	dest = malloc((words + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	dest[words] = NULL;
	if (fill(dest, s, c))
		return (NULL);
	return (dest);
}
