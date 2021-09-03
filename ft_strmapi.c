/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:47:12 by amorici           #+#    #+#             */
/*   Updated: 2021/09/03 10:27:09 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int		i;

	s2 = malloc(sizeof(char) * ft_strlen(s));
	if (!s2)
		return (s2);
	while (s[i])
	{
		s2[i] = f(i, s2[i]);
		i++;
	}
	return (s2);
}
