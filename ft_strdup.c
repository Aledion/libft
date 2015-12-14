/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:29:23 by aroche            #+#    #+#             */
/*   Updated: 2015/12/14 09:43:31 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s1)
{
	int	i;
	char	*ret;

	if (!s1)
		return (NULL);
	if ((ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s1) + 1))))
	{
		i = 0;
		while (s1[i] != 0)
		{
			ret[i] = s1[i];
			i++;
		}
		ret[i] = 0;
		return (ret);
	}
	return (NULL);
}
