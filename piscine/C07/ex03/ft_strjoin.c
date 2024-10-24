#include <stdlib.h>

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
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}// ajout de '\0' a la fin
	return (s1);
}
int	get_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	i = 0;
	while (i < size) // Ajout de verif strs[i] n'est pas NULL
	{
		total_len = total_len + ft_strlen(strs[i]);
		i++;
	}
	total_len = total_len + ft_strlen(sep) * (size - 1);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*out;
	int	total_len;
	int	i;

	if (size == 0)
	{
		out = malloc(sizeof(char));
		out[0] = '\0';
		return (out);
	}
	total_len = get_total_len(size, strs, sep);
	out = malloc(sizeof(char) * (total_len + 1));
	if (out == NULL)
		return(NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(out, strs[i]);
		if (i < size - 1)
			ft_strcat(out, sep);
		i++;
	}
	return (out);
}
#include <stdio.h>

int	main(void)
{
	char 	*strs[2] = {"", NULL}; // Ne pas oulier d'ajouter NULL a la fin 
	char	*sep = "_";
	char	*out;

	out = ft_strjoin(2, strs, sep);
	printf("%s\n", out);
	free(out);
	return (0);
}
