#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (str[i] != '\0')
	{
		while (str[i + tmp] == to_find[tmp])
		{
			if (to_find[tmp + 1] == '\0')
				return (&str[i]);
			tmp++;
		}
		tmp = 0;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	s1[] = "bonjour le monde";
	char	s2[] = "le";

	printf("%s\n", ft_strstr(s1, s2));
	return(0);
}
