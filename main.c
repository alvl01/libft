#include "libft.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
	int	str,i;
	char	tmp[5];
	int	t[2];
	while(1)
	{
		printf(" 1 - Atoi\n 2 - Isalnum\n 3 - Isalpha\n 4 - Isascii\n 5 - Isdigit\n");
		printf(" 6 - Isprint\n 7 - Itoa\n 8 - Memchr\n 9 - Memcmp\n 10 - Memcpy\n");
		printf(" 11 - Memmove\n 12 - Memset\n 13 - Strchr\n 14 - Strdup\n 15 - Strjoin\n");
		printf(" 16 - Strlcat\n 17 - Strlcpy\n 18 - Strlen\n 19 - Strncmp\n 20 - Strnstr\n");
		printf(" 21 - Strrchr\n 22 - Strtrim\n 23 - Substr\n 24 - Tolower\n 25 - Toupper\n");
		printf(" 26 - split\n 48 - EXIT\n");
		printf("Que voulez vous tester? ");
		scanf("%s", tmp);
		str = ft_atoi(tmp);
		if (str == 1)
		{
			char	a[40];
 			printf("Atoi:\n");
			printf("Entrer un nombre:  ");
			scanf("%s", a);
 			printf("    Result User:   %d\n", ft_atoi(a));
			printf("    Result Comp:   %d\n\n\n", atoi(a));
 		}
		else if (str == 2)
		{
			char	a[10];
			int		b;
			printf("Entrer un nombre:  ");
			scanf("%s", a);
			b = atoi(a);
			printf("Isalnum:\n");
			printf("    Result User:   %d\n", ft_isalnum(b));
			printf("    Result Comp:   %d\n\n\n", isalnum(b));
		}
		else if (str == 3)
		{
			char	a[10];
			int		b;
			printf("Entrer un nombre:  ");
			scanf("%s", a);
			b = atoi(a);
			printf("Isalpha:\n");
			printf("    Result User:   %d\n", ft_isalpha(b));
			printf("    Result Comp:   %d\n\n\n", isalpha(b));
		}
		else if (str == 4)
		{
			char	a[10];
			int		b;
			printf("Entrer un nombre:  ");
			scanf("%s", a);
			b = atoi(a);
			printf("Isascii:\n");
			printf("    Result User:   %d\n", ft_isascii(b));
			printf("    Result Comp:   %d\n\n\n", isascii(b));
		}
		else if (str == 5)
		{
			char	a[10];
			int		b;
			printf("Entrer un nombre:  ");
			scanf("%s", a);
			b = atoi(a);
			printf("Isdigit:\n");
			printf("    Result User:   %d\n", ft_isdigit(b));
			printf("    Result Comp:   %d\n\n\n", isdigit(b));
		}
		else if (str == 6)
		{
			char	a[10];
			int		b;
			printf("Entrer un nombre:  ");
			scanf("%s", a);
			b = atoi(a);
			printf("Isprint:\n");
			printf("    Result User:   %d\n", ft_isprint(b));
			printf("    Result Comp:   %d\n\n\n", isprint(b));
		}
		else if (str == 7)
		{
			char	a[40];
			int		b;
			printf("Entrer un nombre:  ");
			scanf("%s", a);
			b = atoi(a);
			printf("Itoa:\n");
			printf("    Result User:   %s\n\n\n", ft_itoa(19));
		}
		else if (str == 8)
		{
			printf("Memchr:\n");
			char s1[10] = "012345678\0";
			char s2[10] = "012345678\0";
			printf("    Result User:   %s\n", ft_memchr(s1, 50, 9));
			printf("    Result Comp:   %s\n\n\n", memchr(s2, 50, 9));
		}
		else if (str == 9)
		{
			printf("Memcmp:\n");
			char s3[10] = "012345678\0";
			char s4[10] = "012345678\0";
			printf("    Result User:   %d\n", ft_memcmp(s3, s4, 9));
			printf("    Result Comp:   %d\n\n\n", memcmp(s3, s4, 9));
		}
		else if (str == 10)
		{
			printf("Memcpy:\n");
			char s5[10] = "012345678\0";
			char s6[10];
			printf("    Result User:   %s\n", ft_memcpy(s6, s5, 10));
			printf("    Result Comp:   %s\n\n\n", memcpy(s6, s5, 10));
		}
		else if (str == 11)
		{
			printf("Memmove:\n");
			char s7[10] = "012345678\0";
			char s8[10];
			printf("    Result User:   %s\n", ft_memmove(s8, s7, 10));
			printf("    Result Comp:   %s\n\n\n", memmove(s8, s7, 10));
		}
		else if (str ==12)
		{
			printf("Memset:\n");
			char s9[10];
			printf("    Result User:   %s\n",ft_memset(s9, 50, 10));
			printf("    Result Comp:   %s\n\n\n", memset(s9, 50, 10));
		}
		else if (str == 13)
		{
			printf("Strchr:\n");
			printf("    Result User:   %s\n", ft_strchr("0123456789", 50));
			printf("    Result Comp:   %s\n\n\n", strchr("0123456789", 50));
		}
		else if (str == 14)
		{
			printf("Strdup:\n");
			printf("    Result User:   %s\n", ft_strdup("0123456789"));
			printf("    Result Comp:   %s\n\n\n", strdup("0123456789"));
		}
		else if (str == 15)
		{
			printf("Strjoin:\n");
			char s20[10] = "012345678\0";
			char s21[10] = "876543210\0";
			printf("    Result User:   %s\n\n\n", ft_strjoin(s20, s21));
		}
		else if (str == 16)
		{
			printf("Strlcat:\n");
			char s10[10] = "012345678\0";
			char s11[10];
			printf("    Result User:   %zu\n", ft_strlcat(s11, s10, 10));
			printf("    Result Comp:   %zu\n\n\n", strlcat(s11, s10, 10));
		}
		else if (str == 17)
		{
			printf("Strlcpy:\n");
			char s12[10] = "012345678\0";
			char s13[10];
			printf("    Result User:   %zu\n", ft_strlcpy(s13, s12, 10));
			printf("    Result Comp:   %zu\n\n\n", strlcpy(s13, s12, 10));
		}
		else if (str == 18)
		{
			printf("Strlen:\n");
			char s22[10] = "012345678\0";
			printf("    Result User:   %zu\n", ft_strlen(s22));
			printf("    Result Comp:   %zu\n\n\n", strlen(s22));
		}
		else if (str == 19)
		{
			printf("Strncmp:\n");
			char s14[10] = "012345678\0";
			char s15[10] = "012345678\0";
			printf("    Result User:   %d\n", ft_strncmp(s14, s15, 9));
			printf("    Result Comp:   %d\n\n\n", strncmp(s14, s15, 9));
		}
		else if (str == 20)
		{
			printf("Strnstr:\n");
			char s16[10] = "012345678\0";
			char s17[2] = "23";
			printf("    Result User:   %s\n", ft_strnstr(s16, s17, 10));
			printf("    Result Comp:   %s\n\n\n", strnstr(s16, s17, 10));
		}
		else if (str == 21)
		{
			printf("Strrchr:\n");
			char s18[10] = "012345678\0";
			printf("    Result User:   %s\n", ft_strrchr(s18, 52));
			printf("    Result Comp:   %s\n\n\n", strrchr(s18, 52));
		}
		else if (str == 22)
		{
			printf("Strtrim:\n");
			printf("    Result User:   %s\n\n\n", ft_strtrim("122221111a12122a22212221", "12"));
			printf("    Result Comp:   a12122a\n\n\n");
		}
		else if (str == 23)
		{
			printf("Substr:\n");
			char s19[10] = "012345678\0";
			char *s01 = ft_substr(s19, 2, 7);
			printf("    Result User:   %s\n\n\n", s01);
		}
		else if (str == 24)
		{
			printf("Tolower:\n");
			printf("    Result User:   %d\n", ft_tolower(67));
			printf("    Result Comp:   %d\n\n\n", tolower(67));
		}
		else if (str == 25)
		{
			printf("Toupper:\n");
			printf("    Result User:   %d\n", ft_toupper(99));
			printf("    Result Comp:   %d\n\n\n", toupper(99));
		}
		else if (str == 26)
		{
			printf("split:\n");
			char	split[100];
			printf("chaine a split(pour une question d facilite le separateur sera un espace):\n");
			scanf("%s", split);
			char **split1 = ft_split(split, ' ');
			while (split1[i++][0])
				printf("    Result User:  %s\n", split1[i]);
		}
		else
			break ;
		printf("voulez vous recommencer?(1/0) ");
		scanf("%d", t);
		if (!t[0])
			break ;
	}
}
