/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:31:06 by aroche            #+#    #+#             */
/*   Updated: 2016/02/11 15:32:20 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*ret;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(*ret) * (size + 1))))
		return (NULL);
	while (i < (size + 1))
	{
		ret[i] = 0;
		i++;
	}
	return (ret);
}
