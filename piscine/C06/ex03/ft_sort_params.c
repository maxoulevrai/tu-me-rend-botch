#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
	write(1, "\n", 1)
}

void	ft_sort_params(int argc, char **argv)
{
	int	i;
	int	j;
	char	*tmp;

	i = 1;
	while (i < (argc - 1))
	{
		j = 1;
		while (j < argc - 1)
		{
			if (argv[j] > argv[j + 1])
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}

}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i != argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);

}
