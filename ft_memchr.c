/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:47:02 by aroche            #+#    #+#             */
/*   Updated: 2015/12/11 10:23:45 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*t;

	if (!s)
		return (NULL);
	t = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((t[i] == (unsigned char)c))
			return (&t[i]);
		i++;
	}
	return (NULL);
}
