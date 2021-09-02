#include"libft.h"
#include<stdlib.h>

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