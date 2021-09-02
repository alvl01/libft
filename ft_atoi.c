#include"libft.h"
int	ft_atoi(const char *str)
{
	long	n;
	long	i;
	long	sign;

	n = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45)
	{
		sign = -1;
		i++;
	}
	else if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i] && ft_isdigit(str[i]) == 1)
		n = n * 10 + (str[i++] - 48);
	return (sign * n);
}