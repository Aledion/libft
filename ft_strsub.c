/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:32:47 by aroche            #+#    #+#             */
/*   Updated: 2015/12/14 11:38:46 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char	*ret;

	if (s)
		if ((ret = (char *)malloc(sizeof(*ret) * (len + 1))))
		{
			i = 0;
			while (i < len)
				ret[i++] = s[start++];
			ret[i] = 0;
			return (ret);
		}
	return (NULL);
}
