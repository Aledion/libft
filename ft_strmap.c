/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:24:11 by aroche            #+#    #+#             */
/*   Updated: 2016/02/11 15:42:49 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ret;

	if ((!s) || (!f))
		return (NULL);
	i = 0;
	if (!(ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		ret[i] = f(s[i]);
		i++;
	}
	ret[i] = 0;
	return (ret);
}
