/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:50:19 by amorici           #+#    #+#             */
/*   Updated: 2021/09/02 14:50:22 by amorici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"


char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	cpy = (char *)malloc(sizeof(char) * len + 1);
	if (!cpy || !s)
		return (NULL);
	while (len--)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
