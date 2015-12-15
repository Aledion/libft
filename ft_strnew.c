/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:31:06 by aroche            #+#    #+#             */
/*   Updated: 2015/12/15 09:20:27 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*ret;

	i = 0;
	if ((ret = (char *)malloc(sizeof(*ret) * (size + 1))))
	{
		while (i < (size + 2))
			ret[i++] = 0;
		return (ret);
	}
	return (NULL);
}
