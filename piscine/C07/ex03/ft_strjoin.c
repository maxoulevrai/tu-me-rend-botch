#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return(s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	char 	*str;

	i = 0;
	len = 0;
	while (strs[i] != NULL)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	str = malloc(sizeof(char) * (len + 1 + (ft_strlen(sep) * (size  - 1))));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (strs[i] != NULL)
	{
		str = ft_strcat(str, strs[i]);
		if (strs[i + 1] != NULL && strs[i][0] != '\0')
			str = ft_strcat(str, sep);
		i++;
	}
	str[ft_strlen(str)] = '\0';
	return(str);
}

int	main(void)
{
	char	*tab[4];

	tab[0] = "";
	tab[1] = "zerrzer";
	tab[2] = "";
	tab[3] = NULL;
	char *s = ft_strjoin(3, tab, "/");
	printf("%s\n", s);
	return (0);
}

