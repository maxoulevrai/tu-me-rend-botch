#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = size -1;
		while (j > 0)
		{
			if (tab[j - 1] > tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[j - 1];
				tab [j - 1] = tmp;
			}
			j--;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[5] = {8, 4, 3, 9, 5};
	int	x;

	ft_sort_int_tab(tab, 5);
	for (x = 0; x < 5; x++)
		printf("%d", tab[x]);
	return (0);
}
