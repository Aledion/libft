/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:07:12 by aroche            #+#    #+#             */
/*   Updated: 2015/12/11 09:34:53 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\t') || (c == '\v') || (c == '\r')
			|| (c == '\f'))
		return (1);
	else
		return (0);
}

int	ft_atoi(char const *str)
{
	int i;
	int r;
	int s;

	if (!str)
		return (0);
	i = 0;
	r = 0;
	s = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		i++;
		s = -s;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] > 47) && (str[i] < 58))
	{
		r = (r * 10) + ((int)str[i] - 48);
		i++;
	}
	return (s * r);
}
