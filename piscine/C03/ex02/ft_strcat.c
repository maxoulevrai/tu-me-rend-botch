#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (src[i] != '\0')
	{
		while (dest[c] != '\0')
			c++;
		dest[c] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	s1[20] = "hello";

	ft_strcat(s1, "???");
	printf("%s\n", s1);
	return (0);
}
