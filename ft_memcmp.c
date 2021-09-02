/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:09:33 by amorici           #+#    #+#             */
/*   Updated: 2021/09/02 15:09:34 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	b = s2;
	a = s1;
	while (*a && n && (*a == *b))
	{
		a++;
		b++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*a - *b);
}
