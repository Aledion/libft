/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:07:51 by aroche            #+#    #+#             */
/*   Updated: 2015/12/11 09:59:12 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_size(int *a, int *size, int n)
{
	while (n != 0)
	{
		n = n / 10;
		if (n != 0)
		{
			*size = *size * 10;
			*a = *a + 1;
		}
	}
}

static char	*ft_remp(int a, int s, int size, int n)
{
	char	*ret;

	if ((ret = (char *)malloc(sizeof(*ret) * (a + 1))))
	{
		a = 0;
		if (s < 0)
			ret[a++] = '-';
		while (size >= 1)
		{
			ret[a] = 48 + (n / size);
			n = n % size;
			size = size / 10;
			a++;
		}
		ret[a] = 0;
		return (ret);
	}
	return (NULL);
}

char		*ft_itoa(int n)
{
	int size;
	int a;
	int s;
	char	*ex;

	size = 1;
	s = 1;
	a = 0;
	if (n == -2147483648)
	{
		ex = ft_strnew(12);
		ex = ft_strcpy(ex, "-2147483648");
		return (ex);
	}
	if (n < 0)
	{
		s = -s;
		n = -n;
		a++;
	}
	ft_size(&a, &size, n);
	return (ft_remp(a, s, size, n));
}
