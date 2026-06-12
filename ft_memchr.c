/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:44:30 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/09 05:12:03 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*position;
	unsigned char	char_c;

	i = 0;
	position = (unsigned char *)s;
	char_c = (unsigned char)c;
	while (i < n)
	{
		if (*position == char_c)
		{
			return ((void *)position);
		}
		position++;
		i++;
	}
	return (NULL);
}
