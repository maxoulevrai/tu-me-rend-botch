#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "dqlivsqDCSDC42356";

	printf("maj:%s\n", ft_strlowcase(str));
	return (0);
}
