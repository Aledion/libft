/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 14:34:04 by aroche            #+#    #+#             */
/*   Updated: 2015/12/17 15:12:22 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int nb)
{
	int	len;

	len = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		if (nb != 0)
			len++;
	}
	return (len);
}
