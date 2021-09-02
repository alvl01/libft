/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:48:38 by amorici           #+#    #+#             */
/*   Updated: 2021/09/02 14:49:18 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*data;
	size_t	i;

	i = 0;
	data = (char *) s;
	while (i < n)
	{
		if ((char)c == *data)
			return (data);
		data++;
		i++;
	}
	return (NULL);
}
