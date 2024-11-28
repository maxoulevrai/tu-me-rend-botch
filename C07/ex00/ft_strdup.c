#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*dest;
	i = 0;
	if (src == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * ft_strlen(src) + 1 );
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	(void)argc;
	char	*s;

	s = ft_strdup(argv[1]);
	printf("%s\n", s);
	free(s);
	return (0);
}
