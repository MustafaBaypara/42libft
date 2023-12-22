/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaypara <mbaypara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:01:34 by mbaypara          #+#    #+#             */
/*   Updated: 2023/12/20 13:04:10 by mbaypara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char **strs, char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		if (strs)
			strs[count] = ft_substr(s, 0, i);
		if (strs && strs[count] == NULL)
			return (-1);
		count++;
		while (s[i] && s[i] == c)
			i++;
		s = s + i;
		i = 0;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strs;

	if (!s)
		return (NULL);
	while (*s && *s == c)
		s++;
	strs = ft_calloc(ft_count(NULL, s, c) + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	if (ft_count(strs, s, c) == -1)
	{
		i = 0;
		while (strs[i])
		{
			free(strs[i]);
			i++;
		}
		free(strs);
		return (NULL);
	}
	return (strs);
}
