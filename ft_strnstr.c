/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:21:50 by aroche            #+#    #+#             */
/*   Updated: 2015/12/14 11:06:38 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s;

	if ((!s1) || (!s2))
		return (NULL);
	s = ft_strlen((char *)s2);
	i = 0;
	j = 0;
	if (s2[j] == 0)
		return ((char *)&s1[i]);
	while ((s1[i] != 0) && (i <= n) && (n >= s))
	{
		if ((s1[i] == s2[i]) && (ft_strncmp(&s1[i], &s2[j], s) == 0))
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
