#include "libft.h"
#include <stdio.h>

size_t     ft_strlcpy(char dst, const char *restrict src, size_t dsize)
{
    int     i;

    i = 0;
    while (i <= (dsize - 1))
    {
        dst[i] = src[i];
        i++;
    }
    return (ft_strlen(src));
}

int main(void)
{
    char    dst[4];
    int     size;

    size = 0;
    size = ft_strlcpy(dst, "bonjour", 4);
    printf("dst: %s, size src: %d", dst, size);
    return (0);
}