/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:54:42 by aroche            #+#    #+#             */
/*   Updated: 2015/12/16 09:01:02 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*co;
	size_t	co_s;

	if ((new = (t_list *)malloc(sizeof(t_list))))
	{
		if (content)
		{
			co = (void *)content;
			co_s = content_size;
			new->content = co;
			new->content_size = co_s;
		}
		else
		{
			new->content = NULL;
			new->content_size = 0;
		}
		new->next = NULL;
		return (new);
	}
	return (NULL);
}
