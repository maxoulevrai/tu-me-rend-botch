#include <stdlib.h>

int	ft_len(char *str, char *charset)
{
	int	count;
	int	i;
	int	len;

	i = 0;
	count = 0
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_charset(charset, str[i]))
			i++:
		if (str[i] != '\0')
			count++;
			len = wordlen(str[i], charset);
			i = i + len
	}
	return (len);
}

int	wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && is_charset(charset, str[i]) == 0)
		i++;
	return (i);
}

int	is_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	char	**out

	out = malloc(sizeof(char*) * ft_len(str, charset) + 1)
	while (str[i] != '\0')
}
