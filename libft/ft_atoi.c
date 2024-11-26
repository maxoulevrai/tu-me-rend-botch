#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] != '\0')
	{
		if ( str[i] == ' ' || (str[i] >= 8 && str[i] <= 13 ))
			i++;
		else if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		else if (str[i] != '\0' || (str[i] >= '0' && str[i] <= '9'))
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
	}
	return (sign * result);
}

int		main(void)
{
	char	s[18] = "    --+-+-523";

	printf("%d\n", ft_atoi(s));
	return (0);
}