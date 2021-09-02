#include"libft.h"
char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = NULL;
	while (*s)
	{
		if (*s == c)
			a = (char *)s;
		s++;
	}
	if (!c)
		return ((char *)s);
	return (a);
}