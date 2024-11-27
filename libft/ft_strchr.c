/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:12:12 by root              #+#    #+#             */
/*   Updated: 2024/11/27 18:12:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	*out;

	out = (char *)str;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&out[i]);
		i++;
	}
	return (NULL);
}
