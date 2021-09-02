#include"libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)dest;
	b = (char *)src;
	if (b == a || n == 0)
		return (a);
	if (b < a && a - b <= (int)n)
	{
		while (n-- > 0)
			a[n] = b[n];
	}
	else
		ft_memcpy(a, b, n);
	return (a);
}