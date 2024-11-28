#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	pa;

	pa = *a;
	*a = *a / *b;
	*b = pa % *b;
}

int	main(void)
{
	int	x;
	int	y;

	x = 16;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("resulat = %d, reste = %d\n", x, y);
	return (0);
}
