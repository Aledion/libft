/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:24:11 by aroche            #+#    #+#             */
/*   Updated: 2015/12/15 09:19:09 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ret;

	if (s)
	{
		i = 0;
		ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s) + 1));
		while (s[i] != 0)
		{
			ret[i] = f(s[i]);
			i++;
		}
		ret[i] = 0;
		return (ret);
	}
	return (NULL);
}
