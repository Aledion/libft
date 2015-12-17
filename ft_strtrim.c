/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:33:48 by aroche            #+#    #+#             */
/*   Updated: 2015/12/17 14:55:21 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	start;
	size_t			len;

	if (s)
	{
		i = 0;
		while (ft_isspace(s[i]))
			i++;
		start = i;
		while (s[i + 1] != 0)
			i++;
		while (ft_isspace(s[i]))
			i--;
		len = i - start + 1;
		return (ft_strsub(s, start, len));
	}
	return (NULL);
}
