/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:47:51 by amorici           #+#    #+#             */
/*   Updated: 2021/09/02 14:47:55 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	return_error(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long	n;
	int		taille;
	long	i;
	long	sign;

	n = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45)
		sign = -1;
	if (str[i] == 43 || str[i] == 45)
		i++;
	taille = i;
	while (str[i] && ft_isdigit(str[i]) == 1)
	{
		n = n * 10 + (str[i++] - 48);
		if ((i - taille > 18
				&& (n > 9223372036854775807 || n < 1000000000000000000))
			|| i - taille > 19)
			return (return_error(sign));
	}
	return (sign * n);
}
