/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:52:47 by amorici           #+#    #+#             */
/*   Updated: 2021/09/02 16:52:51 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
int	spaces(const char *s, char c)
{
	int	i;
	int	space;

	space = 0;
	i = 0;
	while (s[i])
	{
		if (strchr(s, c))
			space++;
		i++;
	}
	return (space);
}

char	**ft_split(char const *s, char c)
{
	int		space;
	int		i;
	int		j;
	char	**tab;

	i = 0;
	space = spaces(s, c);
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (space + 2));
	if (!tab)
		return (NULL);
	space = 0;
	while (s[i])
	{
		if (s[i] == c)
			j = 0;
		if (s[i] == c)
			space++;
		tab[space][j] = s[i];
		i++;
		j++;
	}
	return (tab);
}
