/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:06:02 by aroche            #+#    #+#             */
/*   Updated: 2015/12/14 09:10:23 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_len(int *size, int nb)
{
	while (nb != 0)
	{
		nb = nb / 10;
		if (nb != 0)
			*size = *size * 10;
	}
}

void	ft_putnbr(int nb)
{
	int	size;

	size = 1;
	if (nb != -2147483648)
	{
		if (nb < 0)
		{
		ft_putchar('-');
		nb = -nb;
		}
		ft_len(&size, nb);
		while (size >= 1)
		{
			ft_putchar(48 + (nb / size));
			nb = nb % size;
			size = size / 10;
		}
	}
	else
		ft_putstr("-2147483648");
}
