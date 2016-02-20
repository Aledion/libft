/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:31:58 by aroche            #+#    #+#             */
/*   Updated: 2016/02/20 14:28:29 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordcount(char *s, char c)
{
	int			i;
	int			w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			w++;
			while (s[i] != c)
				i++;
		}
	}
	return (w);
}

static size_t	ft_len(char *s, char c)
{
	int			i;

	i = 0;
	while ((s[i]) && (s[i] != c))
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		x;
	char		**ret;

	i = -1;
	x = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (s[++i])
		if ((s[i] != c) && ((s[i - 1] == c) || (i == 0)))
			ret[x++] = ft_strsub(s, i, ft_len(&s[i], c));
	ret[x] = 0;
	return (ret);
}
