/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:04:35 by root              #+#    #+#             */
/*   Updated: 2024/11/27 18:06:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	char	*out;

	out = (char *)str;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (out[i] == c)
			return (&out[i]);
		i--;
	}
	return (NULL);
}

int	main(void)
{
	char	*str = "ololo";

	printf("%s\n", ft_strrchr(str, 'a'));
	printf("%s\n", strrchr(str, 'a'));
	return (0);
}
