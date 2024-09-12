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
	char	y[5] = "hello";
	int	i;

	printf("%s", *ft_strcpy(x, y);
	return (0);
}
