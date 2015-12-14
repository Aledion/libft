/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:54:01 by aroche            #+#    #+#             */
/*   Updated: 2015/12/14 08:57:42 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	if (!b)
		return (NULL);
	str = (char *)b;
	i = 0;
	while (len > 0)
	{
		str[i] = (char)c;
		i++;
		len--;
	}
	return (b);
}
