#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);

}
int	main(int argc, char **argv)
{
	(void)argc;
	int	i;

	i = 1;
	while (argv[i] != NULL)
	{
		ft_putchar(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
