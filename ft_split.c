#include "libft.h"

char **ft_split(char const *s, char c)
{
    if (s == NULL)
        return NULL;

    char    **str;
    int     counter;
    int     in_word;
    int     len;
    int     i;
    const char  *p;
    const char  *start;

    counter = 0;
    in_word = 0;
    p = (const char *) s;
    
    while (*p)
    {
        if (*p == c)
            in_word = 0;
        else
        {
            if (in_word == 0)
            {
                counter++;
                in_word = 1;
            }
        }
        p++;
    }

    str = (char **)malloc((counter + 1) * sizeof(char *));
    if (str == NULL)
        return NULL;

    i = 0;
    while (*s)
    {
        if (*s != c)
        {
            start = s;
            while (*s && *s != c)
                s++;
            len = s - start;
            str[i] = (char *)malloc((len + 1) * sizeof(char));
            if (str[i] == NULL)
                return NULL;
            ft_memcpy(str[i], start, len);
            str[i][len] = '\0';
            i++;
        }
        else
            s++;
    }

    str[counter] = NULL;
    return str;
}

int main()
{
    char    *str;

    str = "   Hello world, is everything alright?";
    char** ret = ft_split(str, ' ');
    int i = 0;
    while (ret[i])
    {
        printf("%s\n", ret[i]);
        i++;
    }
    return (0);
}