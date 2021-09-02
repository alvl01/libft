/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:23:13 by amorici           #+#    #+#             */
/*   Updated: 2021/09/01 12:23:16 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void	*memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	if (!b)
		return (NULL);
	str = (unsigned char *)b;
	while (len-- =< 0)
	{
		*str = c;
		str++;
	}
	return (*b);
}
