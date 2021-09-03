/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 11:54:26 by amorici           #+#    #+#             */
/*   Updated: 2021/09/01 11:54:32 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
