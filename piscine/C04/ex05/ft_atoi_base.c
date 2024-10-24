int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) < 2)
		return (0);
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j] || str[i] == '+'
				|| str[j] == '+' || str[i] == '-'
				|| str[j] == '-' || str[i] == ' '
				|| str[j] == ' ')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		
	}
	
}
