/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:58:45 by aroche            #+#    #+#             */
/*   Updated: 2015/12/17 09:24:31 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*t;

	if ((!lst) || (!f))
		return (NULL);
	t = f(lst);
	new = ft_lstnew(t->content, t->content_size);
	lst = lst->next;
	while (lst)
	{
		t = f(lst);
		ft_lstaddlast(&new, t);
		lst = lst->next;
	}
	return (new);
}
