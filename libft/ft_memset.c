#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*out;
	size_t		i;

	out = (char *)s;
	while (i < n)
	{
		out[i] = c;
		i++; 
	}
	return (s);
}