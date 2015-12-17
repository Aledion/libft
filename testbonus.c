/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 15:05:14 by aroche            #+#    #+#             */
/*   Updated: 2015/12/17 15:27:54 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char	isspace;
	int		intlen;
	int		pow1;
	int		pow2;

	isspace = ' ';
	ft_putendl("Test de ft_ispace :");
	if (ft_isspace(isspace))
		ft_putendl("Le caractere est un espace.");
	else
		ft_putendl("Le caractere n'est pas un espace.");
	ft_putchar('\n');

	intlen = 1;
	ft_putendl("Test de ft_intlen :");
	ft_putstr("L'int contient ");
	ft_putnbr(ft_intlen(intlen));
	ft_putendl(" chiffres.");
	ft_putchar('\n');

	pow1 = 13;
	pow2 = 13;
	ft_putendl("Test de ft_pow :");
	ft_putnbr(pow1);
	ft_putstr(" ^ ");
	ft_putnbr(pow2);
	ft_putstr(" = ");
	ft_putnbr(ft_pow(pow1, pow2));
	ft_putendl("\n");
}
