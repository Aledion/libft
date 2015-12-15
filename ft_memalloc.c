/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:37:07 by aroche            #+#    #+#             */
/*   Updated: 2015/12/15 09:14:42 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret;

	if ((ret = (void *)malloc(sizeof(*ret) * (size + 1))))
	{
		ft_bzero(ret, size);
		return (ret);
	}
	return (NULL);
}
