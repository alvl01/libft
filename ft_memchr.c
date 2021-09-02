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