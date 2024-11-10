#include "ft_stock_str.h"
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
char    *ft_strdup(char *src)
{
    int     i;
    char    *dest;
    
    i = 0;
    if (src == NULL)
        return (NULL);
    dest = malloc(sizeof(char) * ft_strlen(src) + 1);
    if (dest == NULL)
        return (NULL);
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int     i;
    t_stock_str stock[100];

    i = 1;
    while (i < ac)
    {
        stock[i].size = ft_strlen(av[i]);
        stock[i].str = ft_strdup(av[i]);
        stock[i].copy = ft_strdup(av[i]);
        i++;
    }
        stock[i].size = 0;
        stock[i].str = 0;
        stock[i].copy = 0;
    return (stock);
}

int     main(int ac, char **av)
{

    
    if (ac < 1)
        pav = ft_strs_to_tab(ac, av);
    return (0);
}
