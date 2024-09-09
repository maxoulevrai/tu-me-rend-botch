#include <unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = -1;
	while(str[++x])
	{
		write(1, &str[x], 1);
	}
}

int	main(void)
{
	char oe[] = "salut\n";

	ft_putstr(oe);
	return(0);
}
