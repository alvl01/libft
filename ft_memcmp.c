/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:09:33 by amorici           #+#    #+#             */
/*   Updated: 2021/09/03 10:22:44 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char			*a;
	unsigned char			*b;
	size_t					i;

	i = 0;
	b = (unsigned char *)s2;
	a = (unsigned char *)s1;
	while (i < (n - 1) && a[i] == b[i])
		i++;
	if (n == 0)
		return (0);
	return (a[i] - b[i]);
}
