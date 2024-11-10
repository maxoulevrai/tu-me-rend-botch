#include "ft_stock_str.h"
#include <unistd.h>

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    write(1, str, i);
    write(1, "\n", 1);
}

void    ft_show_tab(struct s_stock_str *par)
{
    int     i;

    i = 0;
    while (par[i].str != 0 && par[i].copy != 0 && par[i].size != 0)
    {
        ft_putstr(par[i].str);
        write(1, par[i].size"\n", 2);
        ft_putstr(par[i].copy);
        i++;
    }
}

int     main(int ac, char **av)
{
    t_stock_str     *pav[100];

    pav = ft_strs_to_tab()
    ft_show_tab(pav)
}