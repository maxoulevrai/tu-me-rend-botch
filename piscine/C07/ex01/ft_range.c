#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int)  * (max - min));
	if (arr == NULL)
		return (NULL);
	while (i < (max - min))
	{
		arr[i] = min + i;
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
	a = INT_MIN;
	b = INT_MIN + 5;
	arr = ft_range(a, b);
	while (i < (b - a))
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
