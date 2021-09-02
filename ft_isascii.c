/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:03:55 by amorici           #+#    #+#             */
/*   Updated: 2021/09/01 12:03:59 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	isascii(int c)
{
	return (c >= 0 && c < 128);
}