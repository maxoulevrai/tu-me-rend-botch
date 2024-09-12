#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] < 57 && str[i] > 48))
			i++;
		else
			return (1);
	}
	return (0);
}

int	main(void)
{
	printf("Hello:%d\n", ft_str_is_numeric(""));
	return (0);
}
