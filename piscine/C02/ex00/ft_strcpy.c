#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	x[5];
	char	y[5] = {'h', 'e', 'l', 'l', 'o'};
	int	i;

	*ft_strcpy(x, y);
	for (i = 0; i < 5; i++)
		printf("%c", x[i]);
	return (0);
}
