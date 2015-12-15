/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:29:58 by aroche            #+#    #+#             */
/*   Updated: 2015/12/15 09:18:52 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ret;

	if ((s1) && (s2))
	{
		i = ft_strlen(s1) + ft_strlen(s2);
		j = 0;
		if ((ret = (char *)malloc(sizeof(*ret) * (i + 1))))
		{
			i = 0;
			while (s1[j] != 0)
				ret[i++] = s1[j++];
			j = 0;
			while (s2[j] != 0)
				ret[i++] = s2[j++];
			ret[i] = 0;
			return (ret);
		}
	}
	return (NULL);
}
