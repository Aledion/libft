/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:21:50 by aroche            #+#    #+#             */
/*   Updated: 2015/12/15 11:16:24 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	j = 0;
	if (s2[j] == 0)
		return ((char *)s1);
	while (s1[i])
	{
		if (s1[i] == s2[j])
		{
			s = i;
			while ((s1[i] == s2[j]) && (n--))
			{
				i++;
				j++;
			}
			if ((s2[j] == 0) || (n == 0))
				return ((char *)&s1[s]);
			i = s;
			j = 0;
		}
		i++;
	}
	return (NULL);
}
