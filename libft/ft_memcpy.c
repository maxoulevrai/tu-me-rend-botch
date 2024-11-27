/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:10:41 by root              #+#    #+#             */
/*   Updated: 2024/11/27 18:10:53 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*srce;
	char	*dste;
	size_t	i;

	srce = (char *)src;
	dste = dst;
	i = 0;
	while (i < n)
	{
		dste[i] = srce[i];
		i++;
	}
	return (dste);
}
