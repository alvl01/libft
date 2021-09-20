/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:49:56 by amorici           #+#    #+#             */
/*   Updated: 2021/09/02 14:49:59 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)dest;
	b = (char *)src;
	if (dest == src || n == 0)
		return (a);
	if (b < a)
	{
		while (n--)
			a[n] = b[n];
	}
	else
		ft_memcpy(a, b, n);
	return (a);
}
