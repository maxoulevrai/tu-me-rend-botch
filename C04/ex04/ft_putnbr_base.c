#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);	
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[i] == '-'
				|| base[j] == '-' || base[i] == '+'
				|| base[j] == '+' || base[i] == ' '
				|| base[j] == ' ')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
	
void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (nb == 0)
	{
		ft_putchar(base[0]);
		return;
	}
	if (base_check(base) == 0)
		return;	
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb != 0)
	{
		if (nb / ft_strlen(base) != 0)
			ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}

int	main(void)
{
	int	nbr;

	nbr = 512;
	write(1, "42:\n", 4);
	ft_putnbr_base(nbr, "0123456789");
	write(1, "\n", 2);
	ft_putnbr_base(nbr, "01");
	write(1, "\n", 2);
	ft_putnbr_base(nbr, "0123456789ABCDEF");
	write(1, "\n", 2);
	ft_putnbr_base(nbr, "poneyvif");
	
	return (0);
}
