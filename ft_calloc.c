#include"libft.h"
#include<stdlib.h>
void	*ft_calloc(size_t n, size_t size)
{
	void	*tab;

	tab = malloc(n * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, (n * size));
	return (tab);
}