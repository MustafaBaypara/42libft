/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaypara <mbaypara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:31:29 by mbaypara          #+#    #+#             */
/*   Updated: 2023/12/12 15:11:06 by mbaypara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	di;
	size_t	si;
	size_t	i;

	di = ft_strlen(dst);
	si = ft_strlen(src);
	i = 0;
	if (dstsize <= di)
		return (si + dstsize);
	while (src[i] && (di + i) < (dstsize - 1))
	{
		dst[di + i] = src[i];
		i++;
	}
	dst[di + i] = '\0';
	return (si + di);
}
