#include <unistd.h>
#include "libft.h"

void	putstr(char *str)
{
	int 	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (argv[i] != NULL)
	{
		putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}