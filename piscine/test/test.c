#include <unistd.h>

int	main(void)
{
	char	str[20] = "hello";
	int	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
