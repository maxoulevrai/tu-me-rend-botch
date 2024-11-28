#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
}

int	main(void)
{
	char	str1[8] = "Hello";
	char	str2[8];
	int	i;

	*ft_strncpy(str2, str1, 3);
	for (i = 0; i < 8; i++)
		printf("%c", str2[i]);
	return (0);
}
