#include "ft_stock_str.h"
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    write(1, str, i);
    write(1, "\n", 1);
}

void    mininbr(int nbr)
{
    if (nbr > 9)
    {
        mininbr(nbr / 10);
        mininbr(nbr % 10);
    }
    else
        ft_putchar(nbr + '0');
        write(1, "\n", 1);
}
void    ft_show_tab(struct s_stock_str *par)
{
    int     i;

    i = 0;
    while (par[i].str != 0 && par[i].copy != 0 && par[i].size != 0)
    {
        ft_putstr(par[i].str);
        mininbr(par[i].size);
        ft_putstr(par[i].copy);
        i++;
    }
}