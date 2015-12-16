/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:58:45 by aroche            #+#    #+#             */
/*   Updated: 2015/12/16 16:24:25 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstsupernew(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	tmp = ft_lstnew(NULL, 0);
	tmp = f(lst);
	new = ft_lstnew(tmp->content, tmp->content_size);
	free(tmp);
	return (new);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if ((!lst) || (!f))
		return (NULL);
	new = ft_lstsupernew(lst, f);
	lst = lst->next;
	while (lst)
	{
		ft_lstaddlast(&new, ft_lstsupernew(lst, f));
		lst = lst->next;
	}
	return (lst);
}
