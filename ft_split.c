/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 12:29:48 by amorici           #+#    #+#             */
/*   Updated: 2021/09/03 10:25:28 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	strlen2(const char *str, char c, size_t i)
{
	int	init;

	init = i;
	while (str[i] && str[i] != c)
		i++;
	return (i - init);
}

static int	spaces(const char *s, char c)
{
	int	i;
	int	space;

	space = 0;
	i = 0;
	if (s[0] != c)
		space++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			space++;
		i++;
	}
	return (space);
}

static char	**return_null(char **tab, int j)
{
	while (j-- > 0)
		free(tab[j]);
	return (NULL);
}

static char	**ft_split2(char **tab, int space, char c, char const *s)
{
	int		i[3];

	i[0] = 0;
	i[1] = 0;
	while (s[i[0]] == c && s[i[0]])
		i[0]++;
	while (i[1] < space && s[i[0]])
	{
		i[2] = 0;
		tab[i[1]] = (char *)ft_calloc(sizeof(char), (strlen2(s, c, i[0]) + 1));
		if (!tab[i[1]])
			return (return_null(tab, i[1]));
		while (s[i[0]] != c && s[i[0]])
		{
			tab[i[1]][i[2]] = s[i[0]];
			i[2]++;
			i[0]++;
		}
		tab[i[1]][i[2]] = '\0';
		while (s[i[0]] == c && s[i[0]])
			i[0]++;
		i[1]++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		space;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	space = spaces(s, c);
	tab = (char **)ft_calloc(sizeof(char *), (space + 1));
	if (!tab)
		return (NULL);
	tab = ft_split2(tab, space, c, s);
	if (!tab)
	{
		free(tab);
		return (NULL);
	}
	tab[space] = NULL;
	return (tab);
}
