/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:06:36 by aroche            #+#    #+#             */
/*   Updated: 2015/12/15 09:17:18 by aroche           ###   ########.fr       */
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

void		ft_putnbr_fd(int nb, int fd)
{
	int	size;

	size = 1;
	if (nb != -2147483648)
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = -nb;
		}
		ft_len(&size, nb);
		while (size >= 1)
		{
			ft_putchar_fd(48 + (nb / size), fd);
			nb = nb % size;
			size = size / 10;
		}
	}
	else
		ft_putstr_fd("-2147483648", fd);
}
