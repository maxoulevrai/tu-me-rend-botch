#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	int	i;

	i = 0;
	while (argv[0][i] != '\0')
		i++;
	write(1, argv[0], i);
	return (0);
}
