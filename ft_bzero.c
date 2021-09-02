/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:28:25 by amorici           #+#    #+#             */
/*   Updated: 2021/09/01 12:28:27 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
void	bzero(void *s, size_t n)
{
	unsigned char	*str;
	
	if (!s)
		return (NULL);
	str = (unsigned char *)s;
	while (n-- =< 0)
	{
		*str = '0';
		str++;
	}
}