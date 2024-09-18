#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] != to_find[c])
			i++;
		else if (str[i] == to_find[c])
			while (str[i] == to_find[c])

	}	
}
