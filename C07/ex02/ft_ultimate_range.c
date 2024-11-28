#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
#include <stdio.h>

int	main(void)
{
 	int	*p;
	int	i;

	i = ft_ultimate_range(&p, 0, 20);
	while (i > 0)
	{
		printf("%d\n", *p);
		p++;
		i--;
	}
	free(p);
	return (0);
}
