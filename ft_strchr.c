#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int     i;
    char    *p;

    p = (char *)s;
    i = 0;
    while (s[i])
    {
        if (s[i] != c)
            i++;
        else
        return (p + i);
    }
    return (0);
}