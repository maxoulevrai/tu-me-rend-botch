#include "libft.h"
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*srce;
	unsigned char	*dste;
	unsigned char	tmp[1024];
	size_t		i;

	srce = (const unsigned char *)src;
	dste = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		tmp[i] = srce[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dste[i] = tmp[i];
		i++;
	}
	return (dest);
}