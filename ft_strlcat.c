/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:14:31 by aroche            #+#    #+#             */
/*   Updated: 2015/12/15 09:19:30 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	char		*tdst;
	char const	*tsrc;
	size_t		n;
	size_t		len;

	tdst = dst;
	n = size;
	tsrc = src;
	while ((n-- != 0) && (*tdst != 0))
		tdst++;
	len = tdst - dst;
	n = size - len;
	if (n == 0)
		return (len + ft_strlen(tsrc));
	while (*tsrc != 0)
	{
		if (n != 1)
		{
			*tdst++ = *tsrc;
			n--;
		}
		tsrc++;
	}
	*tdst = 0;
	return (len + (tsrc - src));
}
