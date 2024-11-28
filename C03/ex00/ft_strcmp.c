#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{	
		if(s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	st1[] = "abcde";
	char	st2[] = "abcd";

	printf("comp: %d\n", ft_strcmp(st1, st2));
	return (0);
}
