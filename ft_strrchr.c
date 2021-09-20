/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:51:14 by amorici           #+#    #+#             */
/*   Updated: 2021/09/02 14:51:15 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char				*a;
	unsigned char		c2;

	c2 = (unsigned char)c;
	a = NULL;
	while (*s)
	{
		if (*s == c2)
			a = (char *)s;
		s++;
	}
	if (!c2)
		return ((char *)s);
	return (a);
}
