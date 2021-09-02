/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:48:30 by amorici           #+#    #+#             */
/*   Updated: 2021/09/02 14:48:32 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*tab;

	tab = malloc(n * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, (n * size));
	return (tab);
}
