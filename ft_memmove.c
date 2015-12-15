/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:50:24 by aroche            #+#    #+#             */
/*   Updated: 2015/12/15 10:26:50 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char	*t;

	if ((t = (unsigned char *)malloc(sizeof(*t) * (len + 1))))
	{
		ft_memcpy(t, src, len);
		ft_memcpy(dst, t, len);
		free(t);
	}
	return (dst);
}
