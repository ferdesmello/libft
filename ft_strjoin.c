/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:59:22 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/09 03:06:07 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;
	char	*new_s;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	new_s = malloc(s1_len + s2_len + 1);
	if (new_s == 0)
		return (0);
	i = 0;
	while (i < s1_len)
	{
		new_s[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_len)
	{
		new_s[i + s1_len] = s2[i];
		i++;
	}
	new_s[i + s1_len] = '\0';
	return (new_s);
}
