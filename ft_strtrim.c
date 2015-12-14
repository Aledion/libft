/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:33:48 by aroche            #+#    #+#             */
/*   Updated: 2015/12/14 11:43:46 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	start;
	size_t	len;

	if (s)
	{
		i = 0;
		while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
			i++;
		start = i;
		while (s[i + 1] != 0)
			i++;
		while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
			i--;
		len = i - start + 1;
		return (ft_strsub(s, start, len));
	}
	return (NULL);
}
