/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:16:47 by aroche            #+#    #+#             */
/*   Updated: 2015/12/15 09:19:55 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char const *src, size_t n)
{
	int	i;

	if ((!dst) || (!src))
		return (NULL);
	i = 0;
	while ((n != 0) && (src[i] != 0))
	{
		dst[i] = src[i];
		i++;
		n--;
	}
	if (n != 0)
		while (n != 0)
		{
			dst[i] = 0;
			i++;
			n--;
		}
	return (dst);
}
