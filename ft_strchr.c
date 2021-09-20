/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:50:08 by amorici           #+#    #+#             */
/*   Updated: 2021/09/02 14:50:10 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c2;

	c2 = (unsigned char)c;
	while (*s)
	{
		if (*s == c2)
			return ((char *)s);
		s++;
	}
	if (!c2)
		return ((char *)s);
	return (NULL);
}
