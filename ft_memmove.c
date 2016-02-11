/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:50:24 by aroche            #+#    #+#             */
/*   Updated: 2016/02/04 21:26:02 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if ((!src) && (!dst))
		return (NULL);
	if (s <= d)
	{
		s = s + len - 1;
		d = d + len - 1;
		while (len--)
			*d-- = *s--;
	}
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}
