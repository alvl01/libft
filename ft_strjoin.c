/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 12:29:48 by amorici           #+#    #+#             */
/*   Updated: 2021/09/03 10:25:28 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*c;

	j = 0;
	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	c = NULL;
	c = malloc(sizeof(char) * (i + 1));
	if (!c)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[j])
		c[i++] = s2[j++];
	c[i] = '\0';
	return (c);
}
