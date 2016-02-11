/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:48:13 by aroche            #+#    #+#             */
/*   Updated: 2016/02/04 20:47:19 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	size_t	i;
	char	*tdst;
	char	*tsrc;

	i = 0;
	tdst = (char *)dst;
	tsrc = (char *)src;
	while (i < n)
	{
		tdst[i] = tsrc[i];
		i++;
	}
	dst = tdst;
	return (dst);
}
