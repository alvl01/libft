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
#include"libft.h"
int	nbr_length(int n)
{
	int	i;

	i = 0;
	while (n > 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa2(int n, int count, int signe, char *c)
{
	if (signe)
		c[0] = '-';
	while (count-- > 0)
	{
		c[count + signe] = 10 - n % 10 + 48;
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
		return ("-2147483648");
	count = nbr_length(n);
	c = malloc(sizeof(char) * (count));
	if (!c)
		return (NULL);
	if (n < 0)
		c = ft_itoa2(n * -1, count, 1, c);
	else
		c = ft_itoa2(n, count, 0, c);
	return (c);
}
