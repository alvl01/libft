#include"libft.h"
char	*ft_strnstr(const char	*src, const char *tofind, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	len2;
	char	*tab;

	i = 0;
	tab = (char *)src;
	len2 = ft_strlen(tofind);
	if (len2 == 0 || src == tofind)
		return (tab);
	while (tab[i] && i < len)
	{
		c = 0;
		while (tab[i + c] && tofind[c]
			&& tab[i + c] == tofind[c] && i + c < len)
			c++;
		if (c == len2)
			return (tab + i);
		i++;
	}
	return (0);
}