/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:21:07 by aroche            #+#    #+#             */
/*   Updated: 2015/12/14 11:34:27 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *s1, char const *s2)
{
	int	i;
	int	j;
	int	s;

	if ((!s1) || (!s2))
		return (NULL);
	i = 0;
	j = 0;
	if (s2[j] == 0)
		return ((char *)s1);
	while (s1[i] != 0)
	{
		if ((s1[i] == s2[j]) && (s2[j] != 0))
		{
			s = i;
			while ((s1[i] == s2[j]) && (s1[i] != 0) && (s2[j++] != 0))
				i++;
			if (s2[j] == 0)
				return ((char *)&s1[s]);
			i = s;
			j = 0;
		}
		i++;
	}
	return (NULL);
}
