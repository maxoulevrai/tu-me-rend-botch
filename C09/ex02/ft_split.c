/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:24:24 by root              #+#    #+#             */
/*   Updated: 2024/11/15 20:59:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     is_charset(char c, char *charset)
{
    int     i;

    i = 0;
    while (charset[i] != '\0')
    {
        if (c == charset[i])
            return (1);
        i++;
    }
    return (0);
}

int     word_len(char *str, char *charset)
{
    int     i;

    i = 0;
    while (str[i] != '\0' && !is_charset(str[i], charset))
        i++;
    return (i);
}

int     tab_count(char *str, char *charset)
{
    int     i;
    int     count;

    if (charset[0] == '\0')
        return (1);

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && is_charset(str[i], charset))
            i++;
        if (str[i] != '\0')
        {
            i += word_len(&str[i], charset);
            count++;
        }
    }
    return (count);
}

char    *ft_strdndup(char *src, int len)
{
    int     i;
    char    *dest;

    i = 0;
    if (src == NULL)
        return (NULL);
    dest = malloc(sizeof(char) * (len + 1));
    if (dest == NULL)
        return (NULL);
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

char    **ft_split(char *str, char *charset)
{
    int     i;
    int     j;
    char    **strs;

    if (str == NULL)
        return (NULL);
    strs = malloc(sizeof(char*) * (tab_count(str, charset) + 1));
    if (strs == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && is_charset(str[i], charset))
            i++;
        if (str[i] != '\0')
        {
            strs[j] = ft_strdndup(&str[i], word_len(&str[i], charset));
            i += word_len(&str[i], charset);
            j++;
        }
    }    
    strs[j] = NULL;
    return (strs);
}

int     main(int argc, char **argv)
{
    int     i;
    char    **strs;

    if (argc < 3)
        return (1);
    i = 0;
    strs = ft_split(argv[1], argv[2]);
    while (strs[i] != NULL)
    {
        printf("%s\n", strs[i]);
        free(strs[i]);
        i++;
    }
    free(strs);
    return (0);
}