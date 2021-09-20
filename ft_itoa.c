/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:21:53 by amorici           #+#    #+#             */
/*   Updated: 2021/09/02 17:22:00 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	nbr_length(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_itoa2(int n, int count, int signe, char *c)
{
	if (signe)
		c[0] = '-';
	c[count + signe] = '\0';
	while (count-- > 0)
	{
		c[count + signe] = n % 10 + 48;
		n /= 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		i;
	int		count;

	i = 0;
	c = NULL;
	count = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = nbr_length(n);
	c = malloc(sizeof(char) * (count + 1));
	if (!c)
		return (NULL);
	if (n < 0)
		c = ft_itoa2(n * -1, count - 1, 1, c);
	else
		c = ft_itoa2(n, count, 0, c);
	return (c);
}
