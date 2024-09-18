#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	int	i;

	c = 0;
	i = 0;
	while (src[c] != '\0' && c <= nb)
	{
		while (dest[i] != '\0')
		{
			i++;
		}
		dest[i] = src[c];
		c++;
	}
	return (dest);
}

int	main(void)
{
	char	s1[20] = "hello";
	
	printf("%s\n", ft_strncat(s1, "???????", 0));
	return (0);
}
