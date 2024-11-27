/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:06:14 by root              #+#    #+#             */
/*   Updated: 2024/11/27 18:07:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || (str[i] >= 8 && str[i] <= 13))
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
