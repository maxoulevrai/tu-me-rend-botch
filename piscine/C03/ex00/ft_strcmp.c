#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	st1[] = "idff323556ggC";
	char	st2[] = "AB";

	printf("comp: %d\n", ft_strcmp(st1, st2));
	return (0);
}
