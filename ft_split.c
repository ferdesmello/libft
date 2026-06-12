/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:27:51 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/09 19:22:12 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_pieces(const char *s, char c)
{
	size_t	i;
	size_t	pieces;

	if (!s)
		return (0);
	i = 0;
	pieces = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			pieces++;
		i++;
	}
	return (pieces);
}

static char	*ft_str_copy_se(const char *start, const char *end)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (end - start + 1));
	if (!dest)
		return (0);
	i = 0;
	while (start < end)
	{
		dest[i] = *start;
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	ft_free_all(char **splitted, int i)
{
	while (i > 0)
	{
		i--;
		free(splitted[i]);
	}
	free(splitted);
}

char	**ft_split(char const *s, char c)
{
	char		**splitted;
	const char	*start;
	size_t		i;

	if (!s || !ft_count_pieces(s, c))
		return (ft_calloc(1, sizeof(char *)));
	splitted = ft_calloc(ft_count_pieces(s, c) + 1, sizeof(char *));
	if (!splitted)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			splitted[i] = ft_str_copy_se(start, s);
			if (!splitted[i++])
				return (ft_free_all(splitted, i - 1), NULL);
		}
		else
			s++;
	}
	return (splitted);
}
