int     is_charset(char *str, char *charset)
{
    int     i;

    i = 0;
    while (charset[i] != '\0')
    {
        if (str[i] != charset[i])
            return (0);
    }
    return (1);
}

int     get_word_len(char *str, char *charset)
{
    int     i;

    i = 0;
    while (str[i] != '\0' && !is_charset(&str[i], charset))
        i++;
    return (i);
}

int     get_word_count(char *str, char *charset)
{
    int     i;
    int     count;
    int     len;

    i = 0;
    count = 0;
    len = 0;
    while (str[i] != '\0'))
    {
        while (str[i] != '\0' && is-charset(&str[i], charset))
            i++;
        if (str[i] != '\0')
        count++;
        len = get_word_len(&str[i], charset);
        i = i + len;
    }
    return (count);
}

char    *strnl int len)
{
    int     i;
    char    *dest;   

    if (src == NULL)
        return (NULL);
    dest = malloc(sizeof(char) * get_word_len(&str[i], charset) + 1);
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (i <= len)
    {
        dest[i] = src[i];
    }
    return (dest);
}

char    **ft_split(char *str, char *charset)
{
    char    **strs;
    int     i;
    int     j;
    
    if (str == NULL)
        return (NULL);
    strs = malloc(sizeof(char*) * get_word_count(str, charset) + 1);
    if (strs == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && is_charset(&str[i], charset))
            i++;
        if (str[i] != '\0')
        {
            strs[j] = str
        }
        
    }
}