#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	y;
	int	*i = y;

	y = 0;
	ft_ft(i);
	printf("%d", y);
	return (0);
}
