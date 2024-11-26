#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char *bytes;

	bytes = (char *)s;
	i = 0;
	while (i <= n)
	{
		bytes[i] = '\0';
		i++;
	}
}