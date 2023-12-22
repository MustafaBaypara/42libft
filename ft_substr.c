/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaypara <mbaypara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:15:21 by mbaypara          #+#    #+#             */
/*   Updated: 2023/12/14 14:11:24 by mbaypara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	len_str;

	len_str = ft_strlen(s);
	if (start >= len_str)
	{
		dst = (char *)malloc(sizeof(char));
		if (!dst)
			return (NULL);
		*dst = '\0';
	}
	else
	{
		if ((len_str - start) < len)
			len = len_str - start;
		if (len_str >= len)
			dst = (char *)malloc(len + 1);
		else
			dst = (char *)malloc(len_str + 1);
		if (dst == NULL)
			return (NULL);
		ft_strlcpy(dst, s + start, len + 1);
	}
	return (dst);
}
