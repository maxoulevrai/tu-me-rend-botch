#include <stdio.h>

int	ft_space(char c)
{
	if (!(c >= 'a' && c <= 'z')
		&& !(c >= 'A' && c <= 'Z')
		&& !(c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	space;
	int	i;

	space = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_space(str[i]))
		{
			space = 1;
		}
		else
		{
			if (space == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			if (space == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			space = 0;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[];

	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("alors: %s\n", ft_strcapitalize(str));
	return (0);
}
