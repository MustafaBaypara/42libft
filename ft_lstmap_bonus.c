/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaypara <mbaypara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:27:12 by mbaypara          #+#    #+#             */
/*   Updated: 2023/12/21 12:05:50 by mbaypara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*newnode;
	void	*tmpcont;

	first = NULL;
	while (lst)
	{
		tmpcont = f(lst->content);
		newnode = ft_lstnew(tmpcont);
		if (newnode == NULL)
		{
			del(tmpcont);
			ft_lstclear(&first, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&first, newnode);
	}
	return (first);
}
