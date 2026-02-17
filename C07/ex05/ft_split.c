/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:09:17 by maleca            #+#    #+#             */
/*   Updated: 2025/02/04 20:15:29 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	get_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

int	get_tab_len(char *str, char *charset)
{
	int	i;
	int	count;
	int	len;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset) == 1)
			i++;
		if (str[i])
		{
			count++;
			len = get_word_len(&str[i], charset);
			i += len;
			i++;
		}
	}
	return (count);
}

char	*ft_strndup(char *src, int len)
{
	int		i;
	char	*dst;

	if (src == NULL || len < 0)
		return (NULL);
	dst = malloc(sizeof(char) * len + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	dst[i] = '\0';
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;

	if (str == NULL || charset == NULL)
		return (NULL);
	strs = malloc(sizeof(char *) * get_tab_len(str, charset) + 1);
	if (strs == NULL)
		return (NULL);
	strs[0] = NULL;
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset) == 1)
			i++;
		if (str[i])
		{
			strs[j] = ft_strndup(&str[i], get_word_len(&str[i], charset));
			j++;
			i += get_word_len(&str[i], charset);
		}
	}
	return (strs);
}
/*
int	main(void)
{
	int		i;
	char **strs = NULL;
	char *str = "bonjour/les/amis";

	strs = ft_split(str, "/");
	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs);
	return (0);
}
*/