#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	x;
	int	y;
	int	i;
	int	j;

	x = 16;
	y = 3;
	ft_div_mod(x, y, &i, &j);
	printf("resultat = %d, reste = %d\n", i, j);
	return (0);
}
