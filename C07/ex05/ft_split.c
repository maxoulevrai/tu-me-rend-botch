#include <stdlib.h>
#include <stdio.h>

int	is_charset(char *str, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (str[i] != charset[i])
			return (0);
		i++;
	}
	return (1);
}

int	word_len(char *str, char *charset)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && is_charset(&str[i], charset) == 0)
		i++;
	return (i);
}

int	tab_len(char *str, char *charset)
{
	int		count;
	int		i;
	int		len;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_charset(&str[i], charset) == 0)
			i++;
		if (str[i] != '\0')
		{	
			count++;
			len = word_len(&str[i], charset);
			i = i + len;
			i++;
		}
	}
	return (count);
}

char	*ft_strdup(char *src, int len)
{
	char	*dest;
	int		i;

	i = 0;
	if (src == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	while(i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**strs;

	strs = malloc(sizeof(char*) * tab_len(str, charset) + 1);
	if (strs == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_charset(&str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			strs[j] = ft_strdup(&str[i], word_len(&str[i], charset));
			j++;
			i = i + word_len(&str[i], charset);
		}
	}
	strs[j] = NULL;
	return (strs);
}

int	main(int argc, char **argv)
{
	(void)argc;
	int	i;
	char	**strs;

	i = 0;
	strs = ft_split(argv[1], argv[2]);
	while (strs[i] != NULL)
	{	
		printf("%s\n", strs[i]);
		i++;
	}
	free(strs);
	return (0);
}
