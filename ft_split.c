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
#include"libft.h"
size_t	ft_strlen2(const char *str, char c, size_t i)
{
	int	init;

	init = i;
	while (str[i] && str[i] != c)
		i++;
	return (i - init);
}

int	spaces(const char *s, char c)
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

char	**ft_split2(char **tab, int space, char c, char const *s)
{
	int		k;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] == c && s[i])
		i++;
	while (j < space && s[i])
	{
		k = 0;
		tab[j] = (char *)ft_calloc(sizeof(char), (ft_strlen2(s, c, i) + 1));
		while (s[i] != c && s[i])
		{
			tab[j][k] = s[i];
			k++;
			i++;
		}
		tab[j][k] = '\0';
		while (s[i] == c && s[i])
			i++;
		j++;
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
	tab = (char **)malloc(sizeof(char *) * (space + 1));
	if (!tab)
		return (NULL);
	tab = ft_split2(tab, space, c, s);
	tab[space] = NULL;
	return (tab);
}
