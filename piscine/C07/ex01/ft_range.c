#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

#include <limits.h>

int	main(void)
{
	int	*arr;
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 4;
	b  = 9;
	arr = ft_range(a , b);
	while (i < (b - a))
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
