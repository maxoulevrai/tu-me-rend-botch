#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
/*
int	main(void)
{
	int	i;
	int	j;

	i = 8;
	j = 6;
	ft_swap(&i, &j);
	printf("Valeur de i : %d\n", i);
	printf("valeur de j : %d\n", jj;
	return (0);
}
*/
