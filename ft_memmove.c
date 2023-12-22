/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaypara <mbaypara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:52:40 by mbaypara          #+#    #+#             */
/*   Updated: 2023/12/20 13:59:32 by mbaypara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (!src && !dest)
		return (NULL);
	if (dst >= src)
	{
		while (len)
		{
			len--;
			dest[len] = source[len];
		}
	}
	else
		ft_memcpy(dest, source, len);
	return ((void *)dest);
}
