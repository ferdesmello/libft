/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:45:13 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/09 05:16:21 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	char_c;

	char_c = (char)c;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == char_c)
			return ((char *)&s[len]);
		len--;
	}
	if (s[len] == char_c)
		return ((char *)&s[len]);
	return (NULL);
}
