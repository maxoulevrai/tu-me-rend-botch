#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*srce;
	char	*dste;
	size_t		i;

	srce = (char *)src;
	dste = dst;
	i = 0;
	while (i < n)
	{
		dste[i] = srce[i];
		i++;
	}
	return (dste);
}