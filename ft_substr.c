/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:05:52 by amorici           #+#    #+#             */
/*   Updated: 2021/09/02 16:05:53 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	substr = malloc(len);
	while (len-- > 0)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}
