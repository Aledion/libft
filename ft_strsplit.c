/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:31:58 by aroche            #+#    #+#             */
/*   Updated: 2015/12/14 11:26:54 by aroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i] != 0)
	{
		if ((s[i] != c) && ((s[i + 1] == c) || (s[i + 1] == 0)))
			w++;
		i++;
	}
	return (w);
}

static size_t	ft_len(unsigned int *start, int *l, char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[*i] == c)
		*i = *i + 1;
	*start = *i;
	while (s[*i] != c)
		*i = *i + 1;
	len = *i - *start;
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	int	i;
	int	j;
	unsigned int	start;
	size_t	len;
	char	**ret;

	if (s)
		if ((ret = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		{
			i = 0;
			j = 0;
			while (j != ft_wordcount(s, c))
			{
				len = ft_len(&start, &i, s, c);
				ret[j++] = ft_strsub(s, start, len);
			}
			ret[j] = 0;
			return (ret);
		}
	return (NULL);
}
