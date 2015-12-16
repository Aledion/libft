/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:25:04 by aroche            #+#    #+#             */
/*   Updated: 2015/12/16 08:17:40 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char	i;
	char			*ret;

	if (s)
	{
		i = 0;
		if ((ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s) + 1))))
		{
			while (s[i] != 0)
			{
				ret[i] = f(i, s[i]);
				i++;
			}
			ret[i] = 0;
			return (ret);
		}
	}
	return (NULL);
}
