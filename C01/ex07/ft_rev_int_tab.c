#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

int	main(void)
{
	int	tab[4] = {45, 76, 1, 8};

	ft_rev_int_tab(tab, 4);
	printf("%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}
