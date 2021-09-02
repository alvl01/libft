/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:28:01 by amorici           #+#    #+#             */
/*   Updated: 2021/09/02 16:28:03 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int	j;

	i = 0;
	j = ft_strlen(s1);
	while (strchr(set, s1[i]))
		i++;
	while (strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j));
}
