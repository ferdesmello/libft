/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 12:48:25 by ferde-so          #+#    #+#             */
/*   Updated: 2026/06/09 05:11:33 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	void	*dest;
	size_t	i;
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		((char *)dest)[i] = s[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return (dest);
}
