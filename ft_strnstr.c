/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:21:50 by aroche            #+#    #+#             */
/*   Updated: 2015/12/17 11:08:10 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *s1, char const *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s;
	size_t	l;

	i = 0;
	if (s2[i] == 0)
		return ((char *)s1);
	while (s1[i] && (len > 0))
	{
		j = 0;
		s = i;
		l = len;
		while ((s1[s] == s2[j]) && (l > 0) && (s1[s]))
		{
			s++;
			j++;
			l--;
		}
		if (s2[j] == 0)
			return ((char *)&s1[i]);
		i++;
		len--;
	}
	return (NULL);
}
