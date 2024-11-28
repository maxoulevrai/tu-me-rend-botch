#ifndef FT_STOCK_STR
#define FT_STOCK_STR

typedef struct s_stock_str
{
    int     size;
    char    *str;
    char    *copy;
}       t_stock_str;

void    ft_putstr(char *str);
void    ft_show_tab(struct s_stock_str *par);
int     ft_strlen(char *str);
char    *ft_strdup(char *src);
struct s_stock_str  *ft_strs_to_tab(int ac, char **av);

#endif